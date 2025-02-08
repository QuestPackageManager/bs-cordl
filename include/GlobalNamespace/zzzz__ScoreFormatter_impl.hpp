#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreFormatter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreFormatter.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::ScoreFormatter::Format)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26ff5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreFormatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreFormatter::*)()>(&::GlobalNamespace::ScoreFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ff66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScoreFormatter::setStaticF__numberFormatInfo(::System::Globalization::NumberFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::NumberFormatInfo*, "_numberFormatInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get>(
      std::forward<::System::Globalization::NumberFormatInfo*>(value));
}
inline ::System::Globalization::NumberFormatInfo* GlobalNamespace::ScoreFormatter::getStaticF__numberFormatInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::NumberFormatInfo*, "_numberFormatInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get>();
}
inline ::StringW GlobalNamespace::ScoreFormatter::Format(int32_t score) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, score);
}
inline void GlobalNamespace::ScoreFormatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreFormatter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreFormatter* GlobalNamespace::ScoreFormatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScoreFormatter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreFormatter::ScoreFormatter() {}
