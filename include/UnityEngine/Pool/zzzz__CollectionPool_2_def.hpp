#pragma once
// IWYU pragma private; include "UnityEngine/Pool/CollectionPool_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(CollectionPool_2)
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Pool {
template <typename T> struct PooledObject_1;
}
namespace UnityEngine::Pool {
template <typename TCollection, typename TItem> class __CollectionPool_2____c;
}
// Forward declare root types
namespace UnityEngine::Pool {
template <typename TCollection, typename TItem> class CollectionPool_2;
}
namespace UnityEngine::Pool {
template <typename TCollection, typename TItem> class __CollectionPool_2____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::CollectionPool_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::__CollectionPool_2____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Pool {
// cpp template
template <typename TCollection, typename TItem>
// Is value type: false
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>* __9;

  static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>* New_ctor();

  /// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TCollection __cctor_b__5_0();

  /// @brief Method <.cctor>b__5_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__5_1(TCollection l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CollectionPool_2____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CollectionPool_2____c(__CollectionPool_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CollectionPool_2____c(__CollectionPool_2____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Pool {
// cpp template
template <typename TCollection, typename TItem>
// Is value type: false
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::Pool::ObjectPool_1<TCollection>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TCollection Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(TCollection toRelease);

  static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionPool_2(CollectionPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionPool_2(CollectionPool_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::CollectionPool_2, "UnityEngine.Pool", "CollectionPool`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::__CollectionPool_2____c, "UnityEngine.Pool", "CollectionPool`2/<>c");
