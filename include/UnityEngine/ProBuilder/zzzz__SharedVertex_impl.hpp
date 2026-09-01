#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\SharedVertex.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex___c::*)()>(&::UnityEngine::ProBuilder::SharedVertex___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f4520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex___c._SortedRemoveAndShift_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SharedVertex___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>)>(
    &::UnityEngine::ProBuilder::SharedVertex___c::_SortedRemoveAndShift_b__26_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66f4524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex___c*>(),
                                                             { "<SortedRemoveAndShift>b__26_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::SharedVertex___c::setStaticF___9(::UnityEngine::ProBuilder::SharedVertex___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::SharedVertex___c*, "<>9", ::UnityEngine::ProBuilder::SharedVertex___c*>(
      std::forward<::UnityEngine::ProBuilder::SharedVertex___c*>(value));
}
inline ::UnityEngine::ProBuilder::SharedVertex___c* UnityEngine::ProBuilder::SharedVertex___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::SharedVertex___c*, "<>9", ::UnityEngine::ProBuilder::SharedVertex___c*>();
}
inline void UnityEngine::ProBuilder::SharedVertex___c::setStaticF___9__26_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>*, "<>9__26_0", ::UnityEngine::ProBuilder::SharedVertex___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* UnityEngine::ProBuilder::SharedVertex___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>*, "<>9__26_0", ::UnityEngine::ProBuilder::SharedVertex___c*>();
}
inline void UnityEngine::ProBuilder::SharedVertex___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::SharedVertex___c::_SortedRemoveAndShift_b__26_0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex___c*>(),
                                                           { "<SortedRemoveAndShift>b__26_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::SharedVertex___c* UnityEngine::ProBuilder::SharedVertex___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SharedVertex___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SharedVertex___c::SharedVertex___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.get_arrayInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::SharedVertex::*)()>(&::UnityEngine::ProBuilder::SharedVertex::get_arrayInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f2ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_arrayInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::SharedVertex::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66f1fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(::UnityEngine::ProBuilder::SharedVertex*)>(&::UnityEngine::ProBuilder::SharedVertex::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66f2cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SharedVertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66e6648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t, int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::set_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66f2db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::UnityEngine::ProBuilder::SharedVertex::*)()>(
    &::UnityEngine::ProBuilder::SharedVertex::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66f2de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::SharedVertex::*)()>(&::UnityEngine::ProBuilder::SharedVertex::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66f2e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::ProBuilder::SharedVertex::*)()>(
    &::UnityEngine::ProBuilder::SharedVertex::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66f2ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66f2ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)()>(&::UnityEngine::ProBuilder::SharedVertex::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66f2f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66f2fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Contains", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(::ArrayW<int32_t>, int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::CopyTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f3018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::Remove)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66f3030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::SharedVertex::*)()>(&::UnityEngine::ProBuilder::SharedVertex::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f2da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::SharedVertex::*)()>(&::UnityEngine::ProBuilder::SharedVertex::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f30cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.GetSharedVertexLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*,
                                                                ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::UnityEngine::ProBuilder::SharedVertex::GetSharedVertexLookup)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x66f30e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                                                                           { "GetSharedVertexLookup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.ShiftIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SharedVertex::*)(int32_t)>(&::UnityEngine::ProBuilder::SharedVertex::ShiftIndexes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66f3500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "ShiftIndexes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.ToSharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*)>(&::UnityEngine::ProBuilder::SharedVertex::ToSharedVertices)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x66f3540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                            { "ToSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.ToSharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (*)(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*)>(&::UnityEngine::ProBuilder::SharedVertex::ToSharedVertices)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x66f3c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                                { "ToSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.GetSharedVerticesWithPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::ProBuilder::SharedVertex::GetSharedVerticesWithPositions)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x66f2070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                                             { "GetSharedVerticesWithPositions", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.RemoveAndShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (*)(
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::SharedVertex::RemoveAndShift)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66f3dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "RemoveAndShift",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                                                                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.SortedRemoveAndShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (*)(
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::SharedVertex::SortedRemoveAndShift)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x66f3ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "SortedRemoveAndShift",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                                                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SharedVertex.SetCoincident
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::SharedVertex::SetCoincident)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x66f41b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "SetCoincident",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>>(),
                                                                                                          ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::SharedVertex::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::SharedVertex::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void UnityEngine::ProBuilder::SharedVertex::__cordl_internal_set_m_Vertices(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vertices = value;
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::SharedVertex::get_arrayInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_arrayInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SharedVertex::_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexes);
}
inline void UnityEngine::ProBuilder::SharedVertex::_ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SharedVertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sharedVertex);
}
inline int32_t UnityEngine::ProBuilder::SharedVertex::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::SharedVertex::set_Item(int32_t i, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, value);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* UnityEngine::ProBuilder::SharedVertex::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::SharedVertex::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::ProBuilder::SharedVertex::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SharedVertex::Add(int32_t item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::ProBuilder::SharedVertex::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::SharedVertex::Contains(int32_t item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Contains", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::ProBuilder::SharedVertex::CopyTo(::ArrayW<int32_t> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool UnityEngine::ProBuilder::SharedVertex::Remove(int32_t item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline int32_t UnityEngine::ProBuilder::SharedVertex::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::SharedVertex::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::SharedVertex::GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                                                                         ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                                                                         { "GetSharedVertexLookup",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sharedVertices, lookup);
}
inline void UnityEngine::ProBuilder::SharedVertex::ShiftIndexes(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "ShiftIndexes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>
UnityEngine::ProBuilder::SharedVertex::ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                          { "ToSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(nullptr, ___internal_method, lookup);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>
UnityEngine::ProBuilder::SharedVertex::ToSharedVertices(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                              { "ToSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(nullptr, ___internal_method, list);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>
UnityEngine::ProBuilder::SharedVertex::GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
                                                           { "GetSharedVerticesWithPositions", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(nullptr, ___internal_method, positions);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> UnityEngine::ProBuilder::SharedVertex::RemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup,
                                                                                                                ::System::Collections::Generic::IEnumerable_1<int32_t>* remove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
          { "RemoveAndShift", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(nullptr, ___internal_method, lookup, remove);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> UnityEngine::ProBuilder::SharedVertex::SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup,
                                                                                                                      ::System::Collections::Generic::List_1<int32_t>* remove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(),
          { "SortedRemoveAndShift", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(nullptr, ___internal_method, lookup, remove);
}
inline void UnityEngine::ProBuilder::SharedVertex::SetCoincident(::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> lookup,
                                                                 ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SharedVertex*>(), { "SetCoincident",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lookup, vertices);
}
inline ::UnityEngine::ProBuilder::SharedVertex* UnityEngine::ProBuilder::SharedVertex::New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SharedVertex*>(indexes));
}
inline ::UnityEngine::ProBuilder::SharedVertex* UnityEngine::ProBuilder::SharedVertex::New_ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SharedVertex*>(sharedVertex));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<int32_t>"
constexpr UnityEngine::ProBuilder::SharedVertex::operator ::System::Collections::Generic::ICollection_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<int32_t>"
constexpr ::System::Collections::Generic::ICollection_1<int32_t>* UnityEngine::ProBuilder::SharedVertex::i___System__Collections__Generic__ICollection_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr UnityEngine::ProBuilder::SharedVertex::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::SharedVertex::i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::ProBuilder::SharedVertex::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::ProBuilder::SharedVertex::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SharedVertex::SharedVertex() {}
