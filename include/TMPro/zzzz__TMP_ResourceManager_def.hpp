#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ResourceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Settings;
}
// Forward declare root types
namespace TMPro {
class TMP_ResourceManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ResourceManager);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_ResourceManager
class CORDL_TYPE TMP_ResourceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_FontAssetReferenceLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetReferenceLookup,
                      put = setStaticF_s_FontAssetReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* s_FontAssetReferenceLookup;

  /// @brief Field s_FontAssetReferences, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetReferences, put = setStaticF_s_FontAssetReferences)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* s_FontAssetReferences;

  /// @brief Field s_TextSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TextSettings, put = setStaticF_s_TextSettings)) ::UnityW<::TMPro::TMP_Settings> s_TextSettings;

  /// @brief Field s_instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_instance, put = setStaticF_s_instance)) ::TMPro::TMP_ResourceManager* s_instance;

  /// @brief Method AddFontAsset, addr 0x480b2e0, size 0x150, virtual false, abstract: false, final false
  static inline void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method GetTextSettings, addr 0x480b1d0, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_Settings> GetTextSettings();

  static inline ::TMPro::TMP_ResourceManager* New_ctor();

  /// @brief Method RebuildFontAssetCache, addr 0x480b4c4, size 0x118, virtual false, abstract: false, final false
  static inline void RebuildFontAssetCache(int32_t instanceID);

  /// @brief Method TryGetFontAsset, addr 0x480b430, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetFontAsset(int32_t hashcode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method .ctor, addr 0x480b1c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetReferenceLookup();

  static inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetReferences();

  static inline ::UnityW<::TMPro::TMP_Settings> getStaticF_s_TextSettings();

  static inline ::TMPro::TMP_ResourceManager* getStaticF_s_instance();

  static inline void setStaticF_s_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value);

  static inline void setStaticF_s_TextSettings(::UnityW<::TMPro::TMP_Settings> value);

  static inline void setStaticF_s_instance(::TMPro::TMP_ResourceManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ResourceManager(TMP_ResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ResourceManager(TMP_ResourceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ResourceManager, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ResourceManager*, "TMPro", "TMP_ResourceManager");
