#pragma once
// IWYU pragma private; include "System\Security\Util\TokenizerShortBlock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerShortBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerShortBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::TokenizerShortBlock::*)()>(&::System::Security::Util::TokenizerShortBlock::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5af3f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerShortBlock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_block;
}
constexpr ::ArrayW<int16_t> const& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_block;
}
constexpr void System::Security::Util::TokenizerShortBlock::__cordl_internal_set_m_block(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_block = value;
}
constexpr ::System::Security::Util::TokenizerShortBlock*& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr ::System::Security::Util::TokenizerShortBlock* const& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr void System::Security::Util::TokenizerShortBlock::__cordl_internal_set_m_next(::System::Security::Util::TokenizerShortBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_next = value;
}
inline void System::Security::Util::TokenizerShortBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::TokenizerShortBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Util::TokenizerShortBlock* System::Security::Util::TokenizerShortBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Util::TokenizerShortBlock*>());
}
// Ctor Parameters []
constexpr ::System::Security::Util::TokenizerShortBlock::TokenizerShortBlock() {}
