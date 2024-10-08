#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ObjectListPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __ObjectListPool_1____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ObjectListPool_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __ObjectListPool_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectListPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__ObjectListPool_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ObjectListPool`1::<>c<T>*
class CORDL_TYPE __ObjectListPool_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ObjectListPool_1____c<T>* __9;

  static inline ::UnityEngine::UIElements::__ObjectListPool_1____c<T>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* __cctor_b__4_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ObjectListPool_1____c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ObjectListPool_1____c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectListPool_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObjectListPool_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectListPool_1____c(__ObjectListPool_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectListPool_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectListPool_1____c(__ObjectListPool_1____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6276 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ObjectListPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ObjectListPool`1<T>*
class CORDL_TYPE ObjectListPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ObjectListPool_1____c<T>;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pool, put = setStaticF_pool)) ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<T>* Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<T>* elements);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_pool();

  static inline void setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectListPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectListPool_1(ObjectListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectListPool_1(ObjectListPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectListPool_1, "UnityEngine.UIElements", "ObjectListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__ObjectListPool_1____c, "UnityEngine.UIElements", "ObjectListPool`1/<>c");
