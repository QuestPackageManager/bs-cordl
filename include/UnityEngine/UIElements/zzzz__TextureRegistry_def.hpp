#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct TextureRegistry_TextureInfo;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct TextureRegistry_TextureInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextureRegistry);
MARK_VAL_T(::UnityEngine::UIElements::TextureRegistry_TextureInfo);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextureRegistry/TextureInfo
struct CORDL_TYPE TextureRegistry_TextureInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureRegistry_TextureInfo();

  // Ctor Parameters [CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureRegistry_TextureInfo(::UnityW<::UnityEngine::Texture> texture, bool dynamic, int32_t refCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6043 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field texture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field dynamic, offset: 0x8, size: 0x1, def value: None
  bool dynamic;

  /// @brief Field refCount, offset: 0xc, size: 0x4, def value: None
  int32_t refCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry_TextureInfo, texture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry_TextureInfo, dynamic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry_TextureInfo, refCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextureRegistry_TextureInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextureRegistry
class CORDL_TYPE TextureRegistry : public ::System::Object {
public:
  // Declarations
  using TextureInfo = ::UnityEngine::UIElements::TextureRegistry_TextureInfo;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField)) ::UnityEngine::UIElements::TextureRegistry* _instance_k__BackingField;

  /// @brief Field m_FreeIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeIds, put = __cordl_internal_set_m_FreeIds)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* m_FreeIds;

  /// @brief Field m_TextureToId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureToId,
                      put = __cordl_internal_set_m_TextureToId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* m_TextureToId;

  /// @brief Field m_Textures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures,
                      put = __cordl_internal_set_m_Textures)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* m_Textures;

  /// @brief Method Acquire, addr 0x4a61b5c, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureId Acquire(::UnityEngine::Texture* tex);

  /// @brief Method AllocAndAcquire, addr 0x4a6167c, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureId AllocAndAcquire(::UnityEngine::Texture* texture, bool dynamic);

  /// @brief Method AllocAndAcquireDynamic, addr 0x4a61660, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureId AllocAndAcquireDynamic();

  /// @brief Method GetTexture, addr 0x4a614ac, size 0x1b4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetTexture(::UnityEngine::UIElements::TextureId id);

  static inline ::UnityEngine::UIElements::TextureRegistry* New_ctor();

  /// @brief Method Release, addr 0x4a61cc4, size 0x280, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::UIElements::TextureId id);

  /// @brief Method UpdateDynamic, addr 0x4a61908, size 0x254, virtual false, abstract: false, final false
  inline void UpdateDynamic(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* const& __cordl_internal_get_m_FreeIds() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*& __cordl_internal_get_m_FreeIds();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* const& __cordl_internal_get_m_TextureToId() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>*& __cordl_internal_get_m_TextureToId();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* const& __cordl_internal_get_m_Textures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>*& __cordl_internal_get_m_Textures();

  constexpr void __cordl_internal_set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* value);

  constexpr void __cordl_internal_set_m_TextureToId(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* value);

  constexpr void __cordl_internal_set_m_Textures(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* value);

  /// @brief Method .ctor, addr 0x4a61f44, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TextureRegistry* getStaticF__instance_k__BackingField();

  /// @brief Method get_instance, addr 0x4a61454, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextureRegistry* get_instance();

  static inline void setStaticF__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureRegistry(TextureRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureRegistry(TextureRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6044 };

  /// @brief Field maxTextures offset 0xffffffff size 0x4
  static constexpr int32_t maxTextures{ static_cast<int32_t>(0x800) };

  /// @brief Field m_Textures, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* ___m_Textures;

  /// @brief Field m_TextureToId, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* ___m_TextureToId;

  /// @brief Field m_FreeIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* ___m_FreeIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_Textures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_TextureToId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_FreeIds) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextureRegistry, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextureRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureRegistry*, "UnityEngine.UIElements", "TextureRegistry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureRegistry_TextureInfo, "UnityEngine.UIElements", "TextureRegistry/TextureInfo");
