#pragma once
// IWYU pragma private; include "Zenject/GuiRenderableManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "Zenject/zzzz__IGuiRenderable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::__GuiRenderableManager__RenderableInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__GuiRenderableManager__RenderableInfo::*)(::Zenject::IGuiRenderable*, int32_t)>(
    &::Zenject::__GuiRenderableManager__RenderableInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4ae0c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IGuiRenderable*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager__RenderableInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__GuiRenderableManager__RenderableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4ae13ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager__RenderableInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__GuiRenderableManager__RenderableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4ae14f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::IGuiRenderable*& Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_get_Renderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderable;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> const& Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_get_Renderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderable;
}
constexpr void Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_set_Renderable(::Zenject::IGuiRenderable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Renderable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_get_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr int32_t const& Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_get_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr void Zenject::__GuiRenderableManager__RenderableInfo::__cordl_internal_set_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Priority = value;
}
inline ::Zenject::__GuiRenderableManager__RenderableInfo* Zenject::__GuiRenderableManager__RenderableInfo::New_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__GuiRenderableManager__RenderableInfo*>(renderable, priority));
}
inline void Zenject::__GuiRenderableManager__RenderableInfo::_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IGuiRenderable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderable, priority);
}
inline ::System::Object* Zenject::__GuiRenderableManager__RenderableInfo::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__GuiRenderableManager__RenderableInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager__RenderableInfo*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__GuiRenderableManager__RenderableInfo::__GuiRenderableManager__RenderableInfo() {}
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__GuiRenderableManager____c::*)()>(&::Zenject::__GuiRenderableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ae184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c.__ctor_b__1_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__GuiRenderableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::__GuiRenderableManager____c::__ctor_b__1_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4ae1854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "<.ctor>b__1_2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c.__ctor_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__GuiRenderableManager____c::*)(::Zenject::__GuiRenderableManager__RenderableInfo*)>(
    &::Zenject::__GuiRenderableManager____c::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4ae186c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "<.ctor>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__GuiRenderableManager__RenderableInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__GuiRenderableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ae1884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__GuiRenderableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ae18d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::__GuiRenderableManager____c::setStaticF___9(::Zenject::__GuiRenderableManager____c* value) {
  ::cordl_internals::setStaticField<::Zenject::__GuiRenderableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>(
      std::forward<::Zenject::__GuiRenderableManager____c*>(value));
}
inline ::Zenject::__GuiRenderableManager____c* Zenject::__GuiRenderableManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__GuiRenderableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>();
}
inline void Zenject::__GuiRenderableManager____c::setStaticF___9__1_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__1_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::__GuiRenderableManager____c::getStaticF___9__1_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__1_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>();
}
inline void Zenject::__GuiRenderableManager____c::setStaticF___9__1_0(::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>(
      std::forward<::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>* Zenject::__GuiRenderableManager____c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get>();
}
inline ::Zenject::__GuiRenderableManager____c* Zenject::__GuiRenderableManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__GuiRenderableManager____c*>());
}
inline void Zenject::__GuiRenderableManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Zenject::__GuiRenderableManager____c::__ctor_b__1_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "<.ctor>b__1_2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t Zenject::__GuiRenderableManager____c::__ctor_b__1_0(::Zenject::__GuiRenderableManager__RenderableInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "<.ctor>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__GuiRenderableManager__RenderableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__GuiRenderableManager____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__GuiRenderableManager____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__GuiRenderableManager____c::__GuiRenderableManager____c() {}
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__GuiRenderableManager____c__DisplayClass1_0::*)()>(
    &::Zenject::__GuiRenderableManager____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ae0c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c__DisplayClass1_0.__ctor_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__GuiRenderableManager____c__DisplayClass1_0::*)(
    ::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(&::Zenject::__GuiRenderableManager____c__DisplayClass1_0::__ctor_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4ae1a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(), "<.ctor>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c__DisplayClass1_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__GuiRenderableManager____c__DisplayClass1_0::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4ae1b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__GuiRenderableManager____c__DisplayClass1_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__GuiRenderableManager____c__DisplayClass1_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4ae1b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::IGuiRenderable*& Zenject::__GuiRenderableManager____c__DisplayClass1_0::__cordl_internal_get_renderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderable;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> const& Zenject::__GuiRenderableManager____c__DisplayClass1_0::__cordl_internal_get_renderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderable;
}
constexpr void Zenject::__GuiRenderableManager____c__DisplayClass1_0::__cordl_internal_set_renderable(::Zenject::IGuiRenderable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__GuiRenderableManager____c__DisplayClass1_0* Zenject::__GuiRenderableManager____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>());
}
inline void Zenject::__GuiRenderableManager____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__GuiRenderableManager____c__DisplayClass1_0::__ctor_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(), "<.ctor>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__GuiRenderableManager____c__DisplayClass1_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__GuiRenderableManager____c__DisplayClass1_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__GuiRenderableManager____c__DisplayClass1_0*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__GuiRenderableManager____c__DisplayClass1_0::__GuiRenderableManager____c__DisplayClass1_0() {}
//  Writing Method size for method: ::Zenject::GuiRenderableManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::GuiRenderableManager::*)(
    ::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(
    &::Zenject::GuiRenderableManager::_ctor)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x4ae073c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.OnGui
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::GuiRenderableManager::*)()>(&::Zenject::GuiRenderableManager::OnGui)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x4ae0ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), "OnGui",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::GuiRenderableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4ae0fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4ae10f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*& Zenject::GuiRenderableManager::__cordl_internal_get__renderables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*> const&
Zenject::GuiRenderableManager::__cordl_internal_get__renderables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderables;
}
constexpr void Zenject::GuiRenderableManager::__cordl_internal_set__renderables(::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::GuiRenderableManager* Zenject::GuiRenderableManager::New_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                                                ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::GuiRenderableManager*>(renderables, priorities));
}
inline void Zenject::GuiRenderableManager::_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                 ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderables, priorities);
}
inline void Zenject::GuiRenderableManager::OnGui() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), "OnGui",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::GuiRenderableManager::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GuiRenderableManager*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderableManager::GuiRenderableManager() {}
