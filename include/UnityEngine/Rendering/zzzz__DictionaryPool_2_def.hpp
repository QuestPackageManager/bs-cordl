#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DictionaryPool_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryPool_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class DictionaryPool_2___c;
}
namespace UnityEngine::Rendering {
template <typename T> struct ObjectPool_1_PooledObject;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class DictionaryPool_2;
}
namespace UnityEngine::Rendering {
template <typename TKey, typename TValue> class DictionaryPool_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DictionaryPool_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DictionaryPool_2___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.Rendering.DictionaryPool`2/<>c<TKey,TValue>
class CORDL_TYPE DictionaryPool_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* __9;

  static inline ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::System::Collections::Generic::Dictionary_2<TKey, TValue>* l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryPool_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryPool_2___c(DictionaryPool_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryPool_2___c(DictionaryPool_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.Rendering.DictionaryPool`2<TKey,TValue>
class CORDL_TYPE DictionaryPool_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* s_Pool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Get();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
  Get(::ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> value);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::Dictionary_2<TKey, TValue>* toRelease);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryPool_2(DictionaryPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryPool_2(DictionaryPool_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DictionaryPool_2, "UnityEngine.Rendering", "DictionaryPool`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DictionaryPool_2___c, "UnityEngine.Rendering", "DictionaryPool`2/<>c");
