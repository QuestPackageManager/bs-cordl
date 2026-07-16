#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedDataRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedDataRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::Meta::XR::ImmersiveDebugger::InspectedMember*)>(&::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Add)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a3f0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(),
                                                             { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a3f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::setStaticF_InspectedMembersRegistry(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*,
                                    "InspectedMembersRegistry", ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*
Meta::XR::ImmersiveDebugger::InspectedDataRegistry::getStaticF_InspectedMembersRegistry() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*,
                                           "InspectedMembersRegistry", ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>();
}
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Add(::System::Type* type, ::Meta::XR::ImmersiveDebugger::InspectedMember* inspectedMember) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(),
                                                           { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, inspectedMember);
}
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*
Meta::XR::ImmersiveDebugger::InspectedDataRegistry::GetMembersForType(::System::Type* type, ::System::Func_3<T, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* filterCallback) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>(),
          { "GetMembersForType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_3<T, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>(nullptr, ___internal_method, type,
                                                                                                                                                              filterCallback);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::InspectedDataRegistry() {}
