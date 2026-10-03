#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DelegateHashCodeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateHashCodeUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Delegate;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::Rendering {
class DelegateHashCodeUtils___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DelegateHashCodeUtils;
}
namespace UnityEngine::Rendering {
class DelegateHashCodeUtils___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DelegateHashCodeUtils*);
MARK_REF_T(::UnityEngine::Rendering::DelegateHashCodeUtils___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DelegateHashCodeUtils*, "UnityEngine.Rendering", "DelegateHashCodeUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DelegateHashCodeUtils___c*, "UnityEngine.Rendering", "DelegateHashCodeUtils/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DelegateHashCodeUtils/<>c
class CORDL_TYPE DelegateHashCodeUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::DelegateHashCodeUtils___c* __9;

  static inline ::UnityEngine::Rendering::DelegateHashCodeUtils___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x6be3ea8, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, bool>* __cctor_b__4_0();

  /// @brief Method .ctor, addr 0x6be3ea4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DelegateHashCodeUtils___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::DelegateHashCodeUtils___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHashCodeUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateHashCodeUtils___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHashCodeUtils___c(DelegateHashCodeUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHashCodeUtils___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHashCodeUtils___c(DelegateHashCodeUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9184 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DelegateHashCodeUtils___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DelegateHashCodeUtils
class CORDL_TYPE DelegateHashCodeUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::DelegateHashCodeUtils___c;

  /// @brief Field s_MethodHashCodeToSkipTargetHashMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MethodHashCodeToSkipTargetHashMap,
                      put = setStaticF_s_MethodHashCodeToSkipTargetHashMap)) ::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>* s_MethodHashCodeToSkipTargetHashMap;

  /// @brief Method ClearCache, addr 0x6be3c64, size 0xc4, virtual false, abstract: false, final false
  static inline void ClearCache();

  /// @brief Method GetFuncHashCode, addr 0x6be38f0, size 0x2ac, virtual false, abstract: false, final false
  static inline int32_t GetFuncHashCode(::System::Delegate* del);

  /// @brief Method GetTotalCacheCount, addr 0x6be3b9c, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetTotalCacheCount();

  static inline ::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>* getStaticF_s_MethodHashCodeToSkipTargetHashMap();

  static inline void setStaticF_s_MethodHashCodeToSkipTargetHashMap(::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHashCodeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateHashCodeUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHashCodeUtils(DelegateHashCodeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHashCodeUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHashCodeUtils(DelegateHashCodeUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DelegateHashCodeUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
