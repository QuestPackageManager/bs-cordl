#pragma once
// IWYU pragma private; include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_destroyCancellationToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::get_destroyCancellationToken)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6ae0eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_destroyCancellationToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.RaiseCancellation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::RaiseCancellation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ae1158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "RaiseCancellation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsInvoking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::IsInvoking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae1184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.CancelInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::CancelInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::StringW, float_t)>(&::UnityEngine::MonoBehaviour::Invoke)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae12d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Invoke", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.InvokeRepeating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::StringW, float_t, float_t)>(&::UnityEngine::MonoBehaviour::InvokeRepeating)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ae1488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "InvokeRepeating", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.CancelInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::StringW)>(&::UnityEngine::MonoBehaviour::CancelInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae1564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsInvoking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MonoBehaviour::*)(::StringW)>(&::UnityEngine::MonoBehaviour::IsInvoking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae16fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::StringW)>(&::UnityEngine::MonoBehaviour::StartCoroutine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae18a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::StringW, ::System::Object*)>(&::UnityEngine::MonoBehaviour::StartCoroutine)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6ae18a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::System::Collections::IEnumerator*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutine)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ae1b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutine_Auto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::System::Collections::IEnumerator*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutine_Auto)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae1cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine_Auto", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::System::Collections::IEnumerator*)>(&::UnityEngine::MonoBehaviour::StopCoroutine)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ae1cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::UnityEngine::Coroutine*)>(&::UnityEngine::MonoBehaviour::StopCoroutine)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ae1e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::StringW)>(&::UnityEngine::MonoBehaviour::StopCoroutine)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6ae1f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopAllCoroutines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::StopAllCoroutines)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae20f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopAllCoroutines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_useGUILayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::get_useGUILayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_useGUILayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.set_useGUILayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(bool)>(&::UnityEngine::MonoBehaviour::set_useGUILayout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ae2268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "set_useGUILayout", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_didStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::get_didStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae233c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_didAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::get_didAwake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae23f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.print
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::MonoBehaviour::print)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ae24b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "print", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.Internal_CancelInvokeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*)>(&::UnityEngine::MonoBehaviour::Internal_CancelInvokeAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ae1230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_CancelInvokeAll", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.Internal_IsInvokingAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::MonoBehaviour*)>(&::UnityEngine::MonoBehaviour::Internal_IsInvokingAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ae1188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_IsInvokingAll", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.InvokeDelayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::StringW, float_t, float_t)>(&::UnityEngine::MonoBehaviour::InvokeDelayed)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6ae12dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                            { "InvokeDelayed", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.CancelInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::StringW)>(&::UnityEngine::MonoBehaviour::CancelInvoke)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ae1568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsInvoking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::MonoBehaviour*, ::StringW)>(&::UnityEngine::MonoBehaviour::IsInvoking)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6ae1700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsObjectMonoBehaviour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::UnityEngine::MonoBehaviour::IsObjectMonoBehaviour)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ae1964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsObjectMonoBehaviour", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutineManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::StringW, ::System::Object*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutineManaged)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6ae1a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutineManaged", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutineManaged2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::UnityEngine::MonoBehaviour::*)(::System::Collections::IEnumerator*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutineManaged2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ae1c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutineManaged2", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutineManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::UnityEngine::Coroutine*)>(&::UnityEngine::MonoBehaviour::StopCoroutineManaged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ae1eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineManaged", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)(::System::Collections::IEnumerator*)>(
    &::UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ae1d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineFromEnumeratorManaged", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.GetScriptClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::GetScriptClassName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6ae27c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "GetScriptClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.OnCancellationTokenCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::OnCancellationTokenCreated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ae10d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "OnCancellationTokenCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MonoBehaviour::*)()>(&::UnityEngine::MonoBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::MonoBehaviour::StopCoroutine_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae20ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                { "StopCoroutine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopAllCoroutines_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::StopAllCoroutines_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae2170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopAllCoroutines_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_useGUILayout_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::get_useGUILayout_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae222c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_useGUILayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.set_useGUILayout_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::MonoBehaviour::set_useGUILayout_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae22f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "set_useGUILayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_didStart_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::get_didStart_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae23bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didStart_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.get_didAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::get_didAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae2478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.Internal_CancelInvokeAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::Internal_CancelInvokeAll_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae2510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_CancelInvokeAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.Internal_IsInvokingAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::Internal_IsInvokingAll_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae254c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_IsInvokingAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.InvokeDelayed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t)>(
    &::UnityEngine::MonoBehaviour::InvokeDelayed_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ae2588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "InvokeDelayed_Injected",
                                                                                {},
                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.CancelInvoke_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::MonoBehaviour::CancelInvoke_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae25e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                { "CancelInvoke_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsInvoking_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::MonoBehaviour::IsInvoking_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae2628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                { "IsInvoking_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.IsObjectMonoBehaviour_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::IsObjectMonoBehaviour_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsObjectMonoBehaviour_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutineManaged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutineManaged_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ae26a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                         { "StartCoroutineManaged_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StartCoroutineManaged2_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (*)(::System::IntPtr, ::System::Collections::IEnumerator*)>(
    &::UnityEngine::MonoBehaviour::StartCoroutineManaged2_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae26fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                { "StartCoroutineManaged2_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutineManaged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::MonoBehaviour::StopCoroutineManaged_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae2740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineManaged_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManaged_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Collections::IEnumerator*)>(&::UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae2784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                { "StopCoroutineFromEnumeratorManaged_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.GetScriptClassName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::MonoBehaviour::GetScriptClassName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae28fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                         { "GetScriptClassName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MonoBehaviour.OnCancellationTokenCreated_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::MonoBehaviour::OnCancellationTokenCreated_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "OnCancellationTokenCreated_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenSource*& UnityEngine::MonoBehaviour::__cordl_internal_get_m_CancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& UnityEngine::MonoBehaviour::__cordl_internal_get_m_CancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationTokenSource;
}
constexpr void UnityEngine::MonoBehaviour::__cordl_internal_set_m_CancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancellationTokenSource = value;
}
inline ::System::Threading::CancellationToken UnityEngine::MonoBehaviour::get_destroyCancellationToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_destroyCancellationToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::RaiseCancellation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "RaiseCancellation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::MonoBehaviour::IsInvoking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::CancelInvoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::Invoke(::StringW methodName, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Invoke", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, time);
}
inline void UnityEngine::MonoBehaviour::InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "InvokeRepeating", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, time, repeatRate);
}
inline void UnityEngine::MonoBehaviour::CancelInvoke(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline bool UnityEngine::MonoBehaviour::IsInvoking(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, methodName);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutine(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, methodName);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutine(::StringW methodName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, methodName, value);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutine(::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, routine);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutine_Auto(::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutine_Auto", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, routine);
}
inline void UnityEngine::MonoBehaviour::StopCoroutine(::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline void UnityEngine::MonoBehaviour::StopCoroutine(::UnityEngine::Coroutine* routine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline void UnityEngine::MonoBehaviour::StopCoroutine(::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline void UnityEngine::MonoBehaviour::StopAllCoroutines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopAllCoroutines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::MonoBehaviour::get_useGUILayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_useGUILayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::set_useGUILayout(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "set_useGUILayout", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::MonoBehaviour::get_didStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::MonoBehaviour::get_didAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::print(::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "print", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::MonoBehaviour::Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_CancelInvokeAll", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline bool UnityEngine::MonoBehaviour::Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_IsInvokingAll", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self);
}
inline void UnityEngine::MonoBehaviour::InvokeDelayed(::UnityEngine::MonoBehaviour* self, ::StringW methodName, float_t time, float_t repeatRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                          { "InvokeDelayed", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, methodName, time, repeatRate);
}
inline void UnityEngine::MonoBehaviour::CancelInvoke(::UnityEngine::MonoBehaviour* self, ::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "CancelInvoke", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, methodName);
}
inline bool UnityEngine::MonoBehaviour::IsInvoking(::UnityEngine::MonoBehaviour* self, ::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsInvoking", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self, methodName);
}
inline bool UnityEngine::MonoBehaviour::IsObjectMonoBehaviour(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsObjectMonoBehaviour", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutineManaged(::StringW methodName, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutineManaged", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, methodName, value);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutineManaged2(::System::Collections::IEnumerator* enumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StartCoroutineManaged2", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, enumerator);
}
inline void UnityEngine::MonoBehaviour::StopCoroutineManaged(::UnityEngine::Coroutine* routine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineManaged", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline void UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineFromEnumeratorManaged", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline ::StringW UnityEngine::MonoBehaviour::GetScriptClassName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "GetScriptClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::OnCancellationTokenCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "OnCancellationTokenCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::MonoBehaviour::StopCoroutine_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                              { "StopCoroutine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, methodName);
}
inline void UnityEngine::MonoBehaviour::StopAllCoroutines_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopAllCoroutines_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::MonoBehaviour::get_useGUILayout_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_useGUILayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MonoBehaviour::set_useGUILayout_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "set_useGUILayout_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::MonoBehaviour::get_didStart_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didStart_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::MonoBehaviour::get_didAwake_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "get_didAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MonoBehaviour::Internal_CancelInvokeAll_Injected(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_CancelInvokeAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline bool UnityEngine::MonoBehaviour::Internal_IsInvokingAll_Injected(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "Internal_IsInvokingAll_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self);
}
inline void UnityEngine::MonoBehaviour::InvokeDelayed_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, float_t time, float_t repeatRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                          { "InvokeDelayed_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, methodName, time, repeatRate);
}
inline void UnityEngine::MonoBehaviour::CancelInvoke_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                              { "CancelInvoke_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, methodName);
}
inline bool UnityEngine::MonoBehaviour::IsInvoking_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                              { "IsInvoking_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self, methodName);
}
inline bool UnityEngine::MonoBehaviour::IsObjectMonoBehaviour_Injected(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "IsObjectMonoBehaviour_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutineManaged_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName,
                                                                                            ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                       { "StartCoroutineManaged_Injected",
                                         {},
                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(nullptr, ___internal_method, _unity_self, methodName, value);
}
inline ::UnityEngine::Coroutine* UnityEngine::MonoBehaviour::StartCoroutineManaged2_Injected(::System::IntPtr _unity_self, ::System::Collections::IEnumerator* enumerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                                           { "StartCoroutineManaged2_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(nullptr, ___internal_method, _unity_self, enumerator);
}
inline void UnityEngine::MonoBehaviour::StopCoroutineManaged_Injected(::System::IntPtr _unity_self, ::System::IntPtr routine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "StopCoroutineManaged_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, routine);
}
inline void UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged_Injected(::System::IntPtr _unity_self, ::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                              { "StopCoroutineFromEnumeratorManaged_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, routine);
}
inline void UnityEngine::MonoBehaviour::GetScriptClassName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(),
                                              { "GetScriptClassName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::MonoBehaviour::OnCancellationTokenCreated_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MonoBehaviour*>(), { "OnCancellationTokenCreated_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::MonoBehaviour* UnityEngine::MonoBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::MonoBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::MonoBehaviour::MonoBehaviour() {}
