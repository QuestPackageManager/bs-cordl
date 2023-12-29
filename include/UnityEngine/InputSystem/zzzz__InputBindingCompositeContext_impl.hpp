#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding.get_part
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::get_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d69bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "get_part",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding.set_part
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::set_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d69c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "set_part",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::*)()>(&::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d69cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "get_control",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding.set_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::*)(
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28d69d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "set_control", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::get_part() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "get_part",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::set_part(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "set_part",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "get_control",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>::get(), "set_control", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_control_k__BackingField", ty:
// "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::__InputBindingCompositeContext__PartBinding(
    int32_t _part_k__BackingField, ::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept {
  this->_part_k__BackingField = _part_k__BackingField;
  this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding::__InputBindingCompositeContext__PartBinding() {}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1<TValue>::operator ::System::Collections::Generic::IComparer_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<TValue>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1<TValue>::Compare(TValue x, TValue y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1<TValue>>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1<TValue>::__InputBindingCompositeContext__DefaultComparer_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.get_controls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>* (::UnityEngine::InputSystem::InputBindingCompositeContext::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::get_controls)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28d67f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                                                                               "get_controls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d68a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "EvaluateMagnitude",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28d68c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValueAsButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t, ::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d6950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d6974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValueAsObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.GetPressTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28d6998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "GetPressTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>* UnityEngine::InputSystem::InputBindingCompositeContext::get_controls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(),
                                                                             "get_controls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "EvaluateMagnitude",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, partNumber);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, partNumber);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControl*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, partNumber, sourceControl);
}
/// @param comparer: TComparer (default: nullptr)
template <typename TValue, typename TComparer> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, TComparer comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, partNumber, comparer);
}
/// @param comparer: TComparer (default: nullptr)
template <typename TValue, typename TComparer>
inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl, TComparer comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControl*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, partNumber, sourceControl, comparer);
}
inline bool UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValueAsButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, partNumber);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, partNumber, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "ReadValueAsObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, partNumber);
}
inline double_t UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingCompositeContext>::get(), "GetPressTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, partNumber);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_BindingIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext::InputBindingCompositeContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_BindingIndex) noexcept {
  this->m_State = m_State;
  this->m_BindingIndex = m_BindingIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext::InputBindingCompositeContext() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28d6870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d69dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x28d69e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
        &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::
            System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28d6ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
        "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28d6aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28d6b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>* (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::
        System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28d6b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::*)()>(
        &::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28d6c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
constexpr UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
constexpr UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set___2__current(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set___4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set___3____4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__totalBindingCount_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalBindingCount_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__totalBindingCount_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalBindingCount_5__2;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set__totalBindingCount_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalBindingCount_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__bindingIndex_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingIndex_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__bindingIndex_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingIndex_5__3;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set__bindingIndex_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingIndex_5__3 = value;
}
constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__bindingState_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingState_5__4;
}
constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__bindingState_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingState_5__4;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set__bindingState_5__4(::UnityEngine::InputSystem::__InputActionState__BindingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingState_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__controlStartIndex_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlStartIndex_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__controlStartIndex_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlStartIndex_5__5;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set__controlStartIndex_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controlStartIndex_5__5 = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__i_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__6;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__get__i_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__6;
}
constexpr void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__set__i_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__6 = value;
}
inline ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2* UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding
UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
      "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*
UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2::__InputBindingCompositeContext___get_controls_d__2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
