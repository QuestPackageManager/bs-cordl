#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_DetailProperties)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_DetailProperties);
// Type: HoudiniEngineUnity::HEU_DetailProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9955))
// CS Name: ::HoudiniEngineUnity::HEU_DetailProperties*
class CORDL_TYPE HEU_DetailProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field _detailDistance, offset 0x10, size 0x4
  __declspec(property(get = __get__detailDistance, put = __set__detailDistance)) float_t _detailDistance;

  /// @brief Field _detailDensity, offset 0x14, size 0x4
  __declspec(property(get = __get__detailDensity, put = __set__detailDensity)) float_t _detailDensity;

  /// @brief Field _detailResolution, offset 0x18, size 0x4
  __declspec(property(get = __get__detailResolution, put = __set__detailResolution)) int32_t _detailResolution;

  /// @brief Field _detailResolutionPerPatch, offset 0x1c, size 0x4
  __declspec(property(get = __get__detailResolutionPerPatch, put = __set__detailResolutionPerPatch)) int32_t _detailResolutionPerPatch;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_DetailProperties__() noexcept;

  constexpr float_t& __get__detailDistance();

  constexpr float_t const& __get__detailDistance() const;

  constexpr void __set__detailDistance(float_t value);

  constexpr float_t& __get__detailDensity();

  constexpr float_t const& __get__detailDensity() const;

  constexpr void __set__detailDensity(float_t value);

  constexpr int32_t& __get__detailResolution();

  constexpr int32_t const& __get__detailResolution() const;

  constexpr void __set__detailResolution(int32_t value);

  constexpr int32_t& __get__detailResolutionPerPatch();

  constexpr int32_t const& __get__detailResolutionPerPatch() const;

  constexpr void __set__detailResolutionPerPatch(int32_t value);

  /// @brief Method IsEquivalentTo, addr 0x21ea60c, size 0x1f0, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties* other);

  static inline ::HoudiniEngineUnity::HEU_DetailProperties* New_ctor();

  /// @brief Method .ctor, addr 0x21ea7fc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_DetailProperties(HEU_DetailProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_DetailProperties(HEU_DetailProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_DetailProperties();

public:
  /// @brief Field _detailDistance, offset: 0x10, size: 0x4, def value: None
  float_t ____detailDistance;

  /// @brief Field _detailDensity, offset: 0x14, size: 0x4, def value: None
  float_t ____detailDensity;

  /// @brief Field _detailResolution, offset: 0x18, size: 0x4, def value: None
  int32_t ____detailResolution;

  /// @brief Field _detailResolutionPerPatch, offset: 0x1c, size: 0x4, def value: None
  int32_t ____detailResolutionPerPatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_DetailProperties, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailProperties, ____detailDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailProperties, ____detailDensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailProperties, ____detailResolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailProperties, ____detailResolutionPerPatch) == 0x1c, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailProperties);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailProperties*, "HoudiniEngineUnity", "HEU_DetailProperties");
