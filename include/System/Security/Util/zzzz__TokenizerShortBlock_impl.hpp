#pragma once
// IWYU pragma private; include "System/Security/Util/TokenizerShortBlock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerShortBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerShortBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::TokenizerShortBlock::*)()>(&::System::Security::Util::TokenizerShortBlock::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c990a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerShortBlock*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_block;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& System::Security::Util::TokenizerShortBlock::__cordl_internal_get_m_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_block;
}
constexpr void System::Security::Util::TokenizerShortBlock::__cordl_internal_set_m_block(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_block)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Util::TokenizerShortBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerShortBlock*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Util::TokenizerShortBlock* System::Security::Util::TokenizerShortBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Util::TokenizerShortBlock*>());
}
// Ctor Parameters []
constexpr ::System::Security::Util::TokenizerShortBlock::TokenizerShortBlock() {}
