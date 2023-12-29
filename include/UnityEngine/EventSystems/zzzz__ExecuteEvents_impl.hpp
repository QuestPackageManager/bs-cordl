#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__ExecuteEvents_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ExecuteEvents_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDropHandler_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
template <typename T1>
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>* UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>*>(object, method));
}
template <typename T1> inline void UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T1> inline void UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::Invoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, eventData);
}
template <typename T1>
inline ::System::IAsyncResult* UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::BeginInvoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, handler, eventData, callback, object);
}
template <typename T1> inline void UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename T1> constexpr ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T1>::__ExecuteEvents__EventFunction_1() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerMoveHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c306fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerEnterHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c307f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerExitHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c308e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerDownHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c309d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerUpHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerClickHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IBeginDragHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDragHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IEndDragHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c30f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDropHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c31084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IScrollHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c31178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IUpdateSelectedHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c3121c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ISelectHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c312c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDeselectHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c31364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IMoveHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c31458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ISubmitHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c314fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ICancelHandler*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerMoveHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerMoveHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c315a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerMoveHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerEnterHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerEnterHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c315f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerEnterHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerExitHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerExitHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerExitHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerDownHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerDownHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c316a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerDownHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerUpHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerUpHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerUpHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_pointerClickHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_pointerClickHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_pointerClickHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_initializePotentialDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* (*)()>(
        &::UnityEngine::EventSystems::ExecuteEvents::get_initializePotentialDrag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c317b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_initializePotentialDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_beginDragHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* (*)()>(&::UnityEngine::EventSystems::ExecuteEvents::get_beginDragHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_beginDragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_dragHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_dragHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_dragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_endDragHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_endDragHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c318b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_endDragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_dropHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_dropHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_dropHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_scrollHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_scrollHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_scrollHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_updateSelectedHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* (*)()>(
        &::UnityEngine::EventSystems::ExecuteEvents::get_updateSelectedHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c319c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_updateSelectedHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_selectHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_selectHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_selectHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_deselectHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_deselectHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_deselectHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_moveHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_moveHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_moveHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_submitHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_submitHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_submitHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.get_cancelHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* (*)()>(
    &::UnityEngine::EventSystems::ExecuteEvents::get_cancelHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c31b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                               "get_cancelHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::ExecuteEvents.GetEventChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*)>(
    &::UnityEngine::EventSystems::ExecuteEvents::GetEventChain)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2c31bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "GetEventChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerMoveHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*, "s_PointerMoveHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerMoveHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*, "s_PointerMoveHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerEnterHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*, "s_PointerEnterHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerEnterHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*, "s_PointerEnterHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerExitHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*, "s_PointerExitHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerExitHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*, "s_PointerExitHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerDownHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*, "s_PointerDownHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerDownHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*, "s_PointerDownHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerUpHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*, "s_PointerUpHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerUpHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*, "s_PointerUpHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_PointerClickHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*, "s_PointerClickHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_PointerClickHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*, "s_PointerClickHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_InitializePotentialDragHandler(
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*, "s_InitializePotentialDragHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*
UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_InitializePotentialDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*,
                                           "s_InitializePotentialDragHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_BeginDragHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*, "s_BeginDragHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_BeginDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*, "s_BeginDragHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DragHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*, "s_DragHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*, "s_DragHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_EndDragHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*, "s_EndDragHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_EndDragHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*, "s_EndDragHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DropHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*, "s_DropHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DropHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*, "s_DropHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_ScrollHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*, "s_ScrollHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_ScrollHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*, "s_ScrollHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_UpdateSelectedHandler(
    ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*, "s_UpdateSelectedHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*
UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_UpdateSelectedHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*, "s_UpdateSelectedHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_SelectHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*, "s_SelectHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_SelectHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*, "s_SelectHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void
UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_DeselectHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*, "s_DeselectHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_DeselectHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*, "s_DeselectHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_MoveHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*, "s_MoveHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_MoveHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*, "s_MoveHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_SubmitHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*, "s_SubmitHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_SubmitHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*, "s_SubmitHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_CancelHandler(::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*, "s_CancelHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*>(value));
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_CancelHandler() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*, "s_CancelHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
inline void UnityEngine::EventSystems::ExecuteEvents::setStaticF_s_InternalTransformList(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, "s_InternalTransformList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* UnityEngine::EventSystems::ExecuteEvents::getStaticF_s_InternalTransformList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, "s_InternalTransformList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get>();
}
template <typename T> inline T UnityEngine::EventSystems::ExecuteEvents::ValidateEventData(::UnityEngine::EventSystems::BaseEventData* data) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "ValidateEventData",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, data);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerMoveHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerEnterHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerEnterHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerExitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerExitHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerDownHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerDownHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerUpHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerUpHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IPointerClickHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IPointerClickHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IBeginDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IBeginDragHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDragHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IEndDragHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IEndDragHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDropHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDropHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IScrollHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IScrollHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IUpdateSelectedHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ISelectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ISelectHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IDeselectHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IDeselectHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::IMoveHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::IMoveHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ISubmitHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ISubmitHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline void UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::EventSystems::ICancelHandler* handler, ::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::ICancelHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, eventData);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerMoveHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerMoveHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerEnterHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerEnterHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerExitHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerExitHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerDownHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerDownHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerUpHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerUpHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_pointerClickHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_pointerClickHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*
UnityEngine::EventSystems::ExecuteEvents::get_initializePotentialDrag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_initializePotentialDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>*, false>(nullptr,
                                                                                                                                                                                   ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_beginDragHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_beginDragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_dragHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_dragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_endDragHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_endDragHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_dropHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_dropHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_scrollHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_scrollHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_updateSelectedHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_updateSelectedHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_selectHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_selectHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_deselectHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_deselectHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_moveHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_moveHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_submitHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_submitHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>* UnityEngine::EventSystems::ExecuteEvents::get_cancelHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(),
                                                                             "get_cancelHandler", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::ExecuteEvents::GetEventChain(::UnityEngine::GameObject* root, ::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* eventChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "GetEventChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, root, eventChain);
}
template <typename T>
inline bool UnityEngine::EventSystems::ExecuteEvents::Execute(::UnityEngine::GameObject* target, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                              ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T>* functor) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "Execute",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, target, eventData, functor);
}
template <typename T>
inline ::UnityEngine::GameObject* UnityEngine::EventSystems::ExecuteEvents::ExecuteHierarchy(::UnityEngine::GameObject* root, ::UnityEngine::EventSystems::BaseEventData* eventData,
                                                                                             ::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T>* callbackFunction) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "ExecuteHierarchy",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__ExecuteEvents__EventFunction_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(nullptr, ___internal_method, root, eventData, callbackFunction);
}
template <typename T> inline bool UnityEngine::EventSystems::ExecuteEvents::ShouldSendToComponent(::UnityEngine::Component* component) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "ShouldSendToComponent",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, component);
}
template <typename T>
inline void UnityEngine::EventSystems::ExecuteEvents::GetEventList(::UnityEngine::GameObject* go, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler*>* results) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "GetEventList",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, results);
}
template <typename T> inline bool UnityEngine::EventSystems::ExecuteEvents::CanHandleEvent(::UnityEngine::GameObject* go) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "CanHandleEvent",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
template <typename T> inline ::UnityEngine::GameObject* UnityEngine::EventSystems::ExecuteEvents::GetEventHandler(::UnityEngine::GameObject* root) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::ExecuteEvents*>::get(), "GetEventHandler",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(nullptr, ___internal_method, root);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
