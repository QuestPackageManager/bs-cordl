#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ListPool_1___c;
}
namespace UnityEngine::Rendering {
template <typename T> struct ObjectPool_1_PooledObject;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class ListPool_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ListPool_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ListPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ListPool_1___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.ListPool`1/<>c<T>
class CORDL_TYPE ListPool_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::ListPool_1___c<T>* __9;

  static inline ::UnityEngine::Rendering::ListPool_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Collections::Generic::List_1<T>* l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ListPool_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::ListPool_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListPool_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListPool_1___c(ListPool_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListPool_1___c(ListPool_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.ListPool`1<T>
class CORDL_TYPE ListPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::ListPool_1___c<T>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<T>* Get();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*> Get(::ByRef<::System::Collections::Generic::List_1<T>*> value);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<T>* toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListPool_1(ListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListPool_1(ListPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ListPool_1, "UnityEngine.Rendering", "ListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ListPool_1___c, "UnityEngine.Rendering", "ListPool`1/<>c");
