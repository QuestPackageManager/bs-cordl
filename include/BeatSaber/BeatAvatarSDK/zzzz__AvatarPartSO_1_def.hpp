#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPartSO_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarPartSO_1)
namespace BeatSaber::BeatAvatarSDK {
class IAvatarPart;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
template <typename T> class AvatarPartSO_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1);
// Dependencies PersistentScriptableObject
namespace BeatSaber::BeatAvatarSDK {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarPartSO`1<T>
class CORDL_TYPE AvatarPartSO_1 : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _localizationKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationKey, put = __cordl_internal_set__localizationKey)) ::StringW _localizationKey;

  /// @brief Field _partAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__partAsset, put = __cordl_internal_set__partAsset)) T _partAsset;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_localizationKey)) ::StringW localizationKey;

  __declspec(property(get = get_partAsset)) T partAsset;

  /// @brief Convert operator to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
  constexpr operator ::BeatSaber::BeatAvatarSDK::IAvatarPart*() noexcept;

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<T>* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::StringW const& __cordl_internal_get__localizationKey() const;

  constexpr ::StringW& __cordl_internal_get__localizationKey();

  constexpr T const& __cordl_internal_get__partAsset() const;

  constexpr T& __cordl_internal_get__partAsset();

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__localizationKey(::StringW value);

  constexpr void __cordl_internal_set__partAsset(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Method get_localizationKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_localizationKey();

  /// @brief Method get_partAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_partAsset();

  /// @brief Convert to "::BeatSaber::BeatAvatarSDK::IAvatarPart"
  constexpr ::BeatSaber::BeatAvatarSDK::IAvatarPart* i___BeatSaber__BeatAvatarSDK__IAvatarPart() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartSO_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartSO_1(AvatarPartSO_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartSO_1(AvatarPartSO_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22070 };

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _localizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____localizationKey;

  /// @brief Field _partAsset, offset: 0x28, size: 0x8, def value: None
  T ____partAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1, "BeatSaber.BeatAvatarSDK", "AvatarPartSO`1");
