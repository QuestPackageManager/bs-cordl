#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Features)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Features;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::Features);
// Type: Org.BouncyCastle.Bcpg.Sig::Features
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::Features*
class CORDL_TYPE Features : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Field FEATURE_MODIFICATION_DETECTION, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_FEATURE_MODIFICATION_DETECTION, put = setStaticF_FEATURE_MODIFICATION_DETECTION)) uint8_t FEATURE_MODIFICATION_DETECTION;

  __declspec(property(get = get_SupportsModificationDetection)) bool SupportsModificationDetection;

  /// @brief Method FeatureToByteArray, addr 0x12383f0, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FeatureToByteArray(uint8_t feature);

  static inline ::Org::BouncyCastle::Bcpg::Sig::Features* New_ctor(bool critical, uint8_t feature);

  static inline ::Org::BouncyCastle::Bcpg::Sig::Features* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SetSupportsFeature, addr 0x1238604, size 0x1b4, virtual false, abstract: false, final false
  inline void SetSupportsFeature(uint8_t feature, bool support);

  /// @brief Method SupportsFeature, addr 0x123858c, size 0x78, virtual false, abstract: false, final false
  inline bool SupportsFeature(uint8_t feature);

  /// @brief Method .ctor, addr 0x123849c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(bool critical, uint8_t feature);

  /// @brief Method .ctor, addr 0x1238454, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline uint8_t getStaticF_FEATURE_MODIFICATION_DETECTION();

  /// @brief Method get_SupportsModificationDetection, addr 0x123852c, size 0x60, virtual false, abstract: false, final false
  inline bool get_SupportsModificationDetection();

  static inline void setStaticF_FEATURE_MODIFICATION_DETECTION(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Features();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Features(Features&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Features(Features const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::Features, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::Features);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::Features*, "Org.BouncyCastle.Bcpg.Sig", "Features");
