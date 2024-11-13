#pragma once
// IWYU pragma private; include "System/ComponentModel/EventDescriptor.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::ComponentModel::EventDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43efa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptor::New_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::EventDescriptor*>(name, attrs));
}
inline void System::ComponentModel::EventDescriptor::_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventDescriptor::EventDescriptor() {}
