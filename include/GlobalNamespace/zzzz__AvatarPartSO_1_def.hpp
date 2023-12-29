#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarPartSO_1)
namespace GlobalNamespace {
class IAvatarPart;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class AvatarPartSO_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AvatarPartSO_1);
// Type: ::AvatarPartSO`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4778))
// CS Name: ::AvatarPartSO`1<T>*
class CORDL_TYPE AvatarPartSO_1 : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __get__id, put = __set__id))::StringW _id;

  /// @brief Field _localizationKey, offset 0x20, size 0x8
  __declspec(property(get = __get__localizationKey, put = __set__localizationKey))::StringW _localizationKey;

  /// @brief Field _partAsset, offset 0x28, size 0x8
  __declspec(property(get = __get__partAsset, put = __set__partAsset)) T _partAsset;

  __declspec(property(get = get_partAsset)) T partAsset;

  __declspec(property(get = get_id))::StringW id;

  __declspec(property(get = get_localizationKey))::StringW localizationKey;

  __declspec(property(get = get_localizedName))::StringW localizedName;

  /// @brief Convert operator to "::GlobalNamespace::IAvatarPart"
  constexpr operator ::GlobalNamespace::IAvatarPart*() noexcept;

  constexpr ::StringW& __get__id();

  constexpr ::StringW const& __get__id() const;

  constexpr void __set__id(::StringW value);

  constexpr ::StringW& __get__localizationKey();

  constexpr ::StringW const& __get__localizationKey() const;

  constexpr void __set__localizationKey(::StringW value);

  constexpr T& __get__partAsset();

  constexpr T const& __get__partAsset() const;

  constexpr void __set__partAsset(T value);

  /// @brief Method get_partAsset addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_partAsset();

  /// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::StringW get_id();

  /// @brief Method get_localizationKey addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::StringW get_localizationKey();

  /// @brief Method get_localizedName addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::StringW get_localizedName();

  static inline ::GlobalNamespace::AvatarPartSO_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartSO_1(AvatarPartSO_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartSO_1(AvatarPartSO_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartSO_1();

public:
  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _localizationKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ____localizationKey;

  /// @brief Field _partAsset, offset: 0x28, size: 0x8, def value: None
  T ____partAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AvatarPartSO_1, "", "AvatarPartSO`1");
