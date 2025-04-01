#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatToTimeAndRotationConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatToTimeAndRotationConverter)
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class RotationTimeProcessor;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatToTimeAndRotationConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatToTimeAndRotationConverter);
// Dependencies BeatToTimeConverter
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatToTimeAndRotationConverter
class CORDL_TYPE BeatToTimeAndRotationConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _rotationTimeProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTimeProcessor, put = __cordl_internal_set__rotationTimeProcessor)) ::GlobalNamespace::RotationTimeProcessor* _rotationTimeProcessor;

  /// @brief Method BeatToRotation, addr 0x26b6e34, size 0x18, virtual false, abstract: false, final false
  inline int32_t BeatToRotation(float_t beat);

  static inline ::GlobalNamespace::BeatToTimeAndRotationConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

  constexpr ::GlobalNamespace::RotationTimeProcessor* const& __cordl_internal_get__rotationTimeProcessor() const;

  constexpr ::GlobalNamespace::RotationTimeProcessor*& __cordl_internal_get__rotationTimeProcessor();

  constexpr void __cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value);

  /// @brief Method .ctor, addr 0x26b6e08, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatToTimeAndRotationConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeAndRotationConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatToTimeAndRotationConverter(BeatToTimeAndRotationConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeAndRotationConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatToTimeAndRotationConverter(BeatToTimeAndRotationConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12890 };

  /// @brief Field _rotationTimeProcessor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RotationTimeProcessor* ____rotationTimeProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatToTimeAndRotationConverter, ____rotationTimeProcessor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatToTimeAndRotationConverter, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatToTimeAndRotationConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatToTimeAndRotationConverter*, "", "BeatToTimeAndRotationConverter");
