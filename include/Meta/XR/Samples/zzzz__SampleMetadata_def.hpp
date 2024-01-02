#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleMetadata)
// Forward declare root types
namespace Meta::XR::Samples {
class SampleMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::Samples::SampleMetadata);
// Type: Meta.XR.Samples::SampleMetadata
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Meta::XR::Samples {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8730))
// CS Name: ::Meta.XR.Samples::SampleMetadata*
class CORDL_TYPE SampleMetadata : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _timestampOpen, offset 0x18, size 0x4
  __declspec(property(get = __get__timestampOpen, put = __set__timestampOpen)) float_t _timestampOpen;

  constexpr float_t& __get__timestampOpen();

  constexpr float_t const& __get__timestampOpen() const;

  constexpr void __set__timestampOpen(float_t value);

  /// @brief Method Awake, addr 0x27f8174, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x27f8190, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x27f8484, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SendEvent, addr 0x27f81c4, size 0x2c0, virtual false, abstract: false, final false
  inline void SendEvent(int32_t eventType);

  static inline ::Meta::XR::Samples::SampleMetadata* New_ctor();

  /// @brief Method .ctor, addr 0x27f8490, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SampleMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleMetadata(SampleMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleMetadata(SampleMetadata const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleMetadata();

public:
  /// @brief Field _timestampOpen, offset: 0x18, size: 0x4, def value: None
  float_t ____timestampOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::Samples::SampleMetadata, 0x20>, "Size mismatch!");

static_assert(offsetof(::Meta::XR::Samples::SampleMetadata, ____timestampOpen) == 0x18, "Offset mismatch!");

} // namespace Meta::XR::Samples
NEED_NO_BOX(::Meta::XR::Samples::SampleMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Samples::SampleMetadata*, "Meta.XR.Samples", "SampleMetadata");
