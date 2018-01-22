#pragma once

#include <stdint.h>

int32_t add(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t adc(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t sub(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t sbb(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t add8(int32_t x, int32_t y);
int32_t add16(int32_t x, int32_t y);
int32_t add32(int32_t x, int32_t y);
int32_t sub8(int32_t x, int32_t y);
int32_t sub16(int32_t x, int32_t y);
int32_t sub32(int32_t x, int32_t y);
int32_t adc8(int32_t x, int32_t y);
int32_t adc16(int32_t x, int32_t y);
int32_t adc32(int32_t x, int32_t y);
int32_t sbb8(int32_t x, int32_t y);
int32_t sbb16(int32_t x, int32_t y);
int32_t sbb32(int32_t x, int32_t y);
void cmp8(int32_t x, int32_t y);
void cmp16(int32_t x, int32_t y);
void cmp32(int32_t x, int32_t y);
int32_t inc(int32_t dest_operand, int32_t op_size);
int32_t dec(int32_t dest_operand, int32_t op_size);
int32_t inc8(int32_t x);
int32_t inc16(int32_t x);
int32_t inc32(int32_t x);
int32_t dec8(int32_t x);
int32_t dec16(int32_t x);
int32_t dec32(int32_t x);
int32_t neg(int32_t dest_operand, int32_t op_size);
int32_t neg8(int32_t x);
int32_t neg16(int32_t x);
int32_t neg32(int32_t x);
void mul8(int32_t source_operand);
void imul8(int32_t source_operand);
void mul16(uint32_t source_operand);
void imul16(int32_t source_operand);
int32_t imul_reg16(int32_t operand1, int32_t operand2);
void mul32(int32_t source_operand);
void imul32(int32_t source_operand);
int32_t imul_reg32(int32_t operand1, int32_t operand2);
int32_t xadd8(int32_t source_operand, int32_t reg);
int32_t xadd16(int32_t source_operand, int32_t reg);
int32_t xadd32(int32_t source_operand, int32_t reg);
void bcd_daa(void);
void bcd_das(void);
void bcd_aad(int32_t imm8);
void bcd_aam(int32_t imm8);
void bcd_aaa(void);
void bcd_aas(void);
int32_t and(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t or(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t xor(int32_t dest_operand, int32_t source_operand, int32_t op_size);
int32_t and8(int32_t x, int32_t y);
int32_t and16(int32_t x, int32_t y);
int32_t and32(int32_t x, int32_t y);
void test8(int32_t x, int32_t y);
void test16(int32_t x, int32_t y);
void test32(int32_t x, int32_t y);
int32_t or8(int32_t x, int32_t y);
int32_t or16(int32_t x, int32_t y);
int32_t or32(int32_t x, int32_t y);
int32_t xor8(int32_t x, int32_t y);
int32_t xor16(int32_t x, int32_t y);
int32_t xor32(int32_t x, int32_t y);
int32_t rol8(int32_t dest_operand, int32_t count);
int32_t rol16(int32_t dest_operand, int32_t count);
int32_t rol32(int32_t dest_operand, int32_t count);
int32_t rcl8(int32_t dest_operand, int32_t count);
int32_t rcl16(int32_t dest_operand, int32_t count);
int32_t rcl32(int32_t dest_operand, int32_t count);
int32_t ror8(int32_t dest_operand, int32_t count);
int32_t ror16(int32_t dest_operand, int32_t count);
int32_t ror32(int32_t dest_operand, int32_t count);
int32_t rcr8(int32_t dest_operand, int32_t count);
int32_t rcr16(int32_t dest_operand, int32_t count);
int32_t rcr32(int32_t dest_operand, int32_t count);
void div8(uint32_t source_operand);
void idiv8(int32_t source_operand);
void div16(uint32_t source_operand);
void idiv16(int32_t source_operand);
void div32(uint32_t source_operand);
void idiv32(int32_t source_operand);
int32_t shl8(int32_t dest_operand, int32_t count);
int32_t shl16(int32_t dest_operand, int32_t count);
int32_t shl32(int32_t dest_operand, int32_t count);
int32_t shr8(int32_t dest_operand, int32_t count);
int32_t shr16(int32_t dest_operand, int32_t count);
int32_t shr32(int32_t dest_operand, int32_t count);
int32_t sar8(int32_t dest_operand, int32_t count);
int32_t sar16(int32_t dest_operand, int32_t count);
int32_t sar32(int32_t dest_operand, int32_t count);
int32_t shrd16(int32_t dest_operand, int32_t source_operand, int32_t count);
int32_t shrd32(int32_t dest_operand, int32_t source_operand, int32_t count);
int32_t shld16(int32_t dest_operand, int32_t source_operand, int32_t count);
int32_t shld32(int32_t dest_operand, int32_t source_operand, int32_t count);
void bt_reg(int32_t bit_base, int32_t bit_offset);
int32_t btc_reg(int32_t bit_base, int32_t bit_offset);
int32_t bts_reg(int32_t bit_base, int32_t bit_offset);
int32_t btr_reg(int32_t bit_base, int32_t bit_offset);
void bt_mem(int32_t virt_addr, int32_t bit_offset);
void btc_mem(int32_t virt_addr, int32_t bit_offset);
void btr_mem(int32_t virt_addr, int32_t bit_offset);
void bts_mem(int32_t virt_addr, int32_t bit_offset);
int32_t bsf16(int32_t old, int32_t bit_base);
int32_t bsf32(int32_t old, int32_t bit_base);
int32_t bsr16(int32_t old, int32_t bit_base);
int32_t bsr32(int32_t old, int32_t bit_base);
int32_t popcnt(int32_t v);
uint32_t saturate_sw_to_ub(uint32_t v);
int32_t saturate_sw_to_sb(int32_t v);
uint32_t saturate_sd_to_sw(uint32_t v);
uint32_t saturate_sd_to_sb(uint32_t v);
int32_t saturate_sd_to_ub(int32_t v);
uint32_t saturate_ud_to_ub(uint32_t v);
int32_t saturate_uw(uint32_t v);
