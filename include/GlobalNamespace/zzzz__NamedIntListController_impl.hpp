#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedIntListController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "HMUI/zzzz__IValueChanger_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController_TextValuePair.get_localizedText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::NamedIntListController_TextValuePair::*)()>(
    &::GlobalNamespace::NamedIntListController_TextValuePair::get_localizedText)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c35d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController_TextValuePair*>::get(),
                                                                               "get_localizedText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController_TextValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController_TextValuePair::*)()>(
    &::GlobalNamespace::NamedIntListController_TextValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c35d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController_TextValuePair*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr ::StringW const& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr void GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_set_localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::StringW GlobalNamespace::NamedIntListController_TextValuePair::get_localizedText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController_TextValuePair*>::get(),
                                                                             "get_localizedText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::NamedIntListController_TextValuePair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController_TextValuePair*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListController_TextValuePair* GlobalNamespace::NamedIntListController_TextValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NamedIntListController_TextValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListController_TextValuePair::NamedIntListController_TextValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.add_valueChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListController::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c35a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "add_valueChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.remove_valueChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListController::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c35b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "remove_valueChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.InitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(
    ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*>)>(&::GlobalNamespace::NamedIntListController::InitValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3c35bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "InitValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3c35c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NamedIntListController::*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::GlobalNamespace::NamedIntListController::GetInitValues)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c35c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(
    &::GlobalNamespace::NamedIntListController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c35cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::NamedIntListController::*)(int32_t)>(
    &::GlobalNamespace::NamedIntListController::TextForValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c35cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)()>(&::GlobalNamespace::NamedIntListController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c35d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*>&
GlobalNamespace::NamedIntListController::__cordl_internal_get__textValuePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*> const&
GlobalNamespace::NamedIntListController::__cordl_internal_get__textValuePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set__textValuePairs(
    ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textValuePairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::NamedIntListController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::NamedIntListController::__cordl_internal_get_valueChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::NamedIntListController::__cordl_internal_get_valueChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set_valueChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NamedIntListController::add_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "add_valueChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListController::remove_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "remove_valueChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::NamedIntListController::InitValues(::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "InitValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*, ::Array<::GlobalNamespace::NamedIntListController_TextValuePair*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void GlobalNamespace::NamedIntListController::SetValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), "SetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NamedIntListController::GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::NamedIntListController::ApplyValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::NamedIntListController::TextForValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline void GlobalNamespace::NamedIntListController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListController* GlobalNamespace::NamedIntListController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NamedIntListController*>());
}
/// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
constexpr GlobalNamespace::NamedIntListController::operator ::HMUI::IValueChanger_1<int32_t>*() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::IValueChanger_1<int32_t>"
constexpr ::HMUI::IValueChanger_1<int32_t>* GlobalNamespace::NamedIntListController::i___HMUI__IValueChanger_1_int32_t_() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListController::NamedIntListController() {}
