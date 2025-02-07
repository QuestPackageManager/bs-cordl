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
template <typename T> class ObjectListPool_1___c;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class ObjectListPool_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectListPool_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectListPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectListPool_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.ObjectListPool`1/<>c<T>
class CORDL_TYPE ObjectListPool_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ObjectListPool_1___c<T>* __9;

  static inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* __cctor_b__4_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ObjectListPool_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectListPool_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectListPool_1___c(ObjectListPool_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectListPool_1___c(ObjectListPool_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.ObjectListPool`1<T>
class CORDL_TYPE ObjectListPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ObjectListPool_1___c<T>;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pool, put = setStaticF_pool)) ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* pool;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6311 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectListPool_1, "UnityEngine.UIElements", "ObjectListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectListPool_1___c, "UnityEngine.UIElements", "ObjectListPool`1/<>c");
