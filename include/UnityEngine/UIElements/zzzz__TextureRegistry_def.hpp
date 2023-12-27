#pragma once
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
namespace UnityEngine {
class Texture;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct __TextureRegistry__TextureInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct __TextureRegistry__TextureInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextureRegistry);
MARK_VAL_T(::UnityEngine::UIElements::__TextureRegistry__TextureInfo);
// Type: ::TextureInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7340))
// CS Name: ::TextureRegistry::TextureInfo
struct CORDL_TYPE __TextureRegistry__TextureInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "refCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextureRegistry__TextureInfo(::UnityEngine::Texture* texture, bool dynamic, int32_t refCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextureRegistry__TextureInfo();

  /// @brief Field texture, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture* texture;

  /// @brief Field dynamic, offset: 0x8, size: 0x1, def value: None
  bool dynamic;

  /// @brief Field refCount, offset: 0xc, size: 0x4, def value: None
  int32_t refCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextureRegistry__TextureInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextureRegistry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7341))
// CS Name: ::UnityEngine.UIElements::TextureRegistry*
class CORDL_TYPE TextureRegistry : public ::System::Object {
public:
  // Declarations
  using TextureInfo = ::UnityEngine::UIElements::__TextureRegistry__TextureInfo;

  /// @brief Field m_Textures, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Textures, put = __set_m_Textures))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>* m_Textures;

  /// @brief Field m_TextureToId, offset 0x18, size 0x8
  __declspec(property(get = __get_m_TextureToId, put = __set_m_TextureToId))::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId>* m_TextureToId;

  /// @brief Field m_FreeIds, offset 0x20, size 0x8
  __declspec(property(get = __get_m_FreeIds, put = __set_m_FreeIds))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* m_FreeIds;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField))::UnityEngine::UIElements::TextureRegistry* _instance_k__BackingField;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*& __get_m_Textures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>*> const& __get_m_Textures() const;

  constexpr void __set_m_Textures(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId>*& __get_m_TextureToId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId>*> const& __get_m_TextureToId() const;

  constexpr void __set_m_TextureToId(::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId>* value);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*& __get_m_FreeIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*> const& __get_m_FreeIds() const;

  constexpr void __set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* value);

  static inline void setStaticF__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry* value);

  static inline ::UnityEngine::UIElements::TextureRegistry* getStaticF__instance_k__BackingField();

  /// @brief Method get_instance addr 0x2e7c560 size 0x58 virtual false final false
  static inline ::UnityEngine::UIElements::TextureRegistry* get_instance();

  /// @brief Method GetTexture addr 0x2e7c5b8 size 0x13c virtual false final false
  inline ::UnityEngine::Texture* GetTexture(::UnityEngine::UIElements::TextureId id);

  /// @brief Method AllocAndAcquireDynamic addr 0x2e7c6f4 size 0x1c virtual false final false
  inline ::UnityEngine::UIElements::TextureId AllocAndAcquireDynamic();

  /// @brief Method UpdateDynamic addr 0x2e7c970 size 0x1ac virtual false final false
  inline void UpdateDynamic(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);

  /// @brief Method AllocAndAcquire addr 0x2e7c710 size 0x260 virtual false final false
  inline ::UnityEngine::UIElements::TextureId AllocAndAcquire(::UnityEngine::Texture* texture, bool dynamic);

  /// @brief Method Acquire addr 0x2e7cb1c size 0x140 virtual false final false
  inline ::UnityEngine::UIElements::TextureId Acquire(::UnityEngine::Texture* tex);

  /// @brief Method Release addr 0x2e7cc5c size 0x1f0 virtual false final false
  inline void Release(::UnityEngine::UIElements::TextureId id);

  static inline ::UnityEngine::UIElements::TextureRegistry* New_ctor();

  /// @brief Method .ctor addr 0x2e7ce4c size 0x10c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureRegistry(TextureRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureRegistry(TextureRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureRegistry();

public:
  /// @brief Field m_Textures, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TextureRegistry__TextureInfo>* ___m_Textures;

  /// @brief Field m_TextureToId, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId>* ___m_TextureToId;

  /// @brief Field m_FreeIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* ___m_FreeIds;

  /// @brief Field maxTextures offset 0xffffffff size 0x4
  static constexpr int32_t maxTextures{ static_cast<int32_t>(0x800) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextureRegistry, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextureRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureRegistry*, "UnityEngine.UIElements", "TextureRegistry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextureRegistry__TextureInfo, "UnityEngine.UIElements", "TextureRegistry/TextureInfo");
