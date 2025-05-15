#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatToTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatToTimeConverter)
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatToTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatToTimeConverter);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatToTimeConverter
class CORDL_TYPE BeatToTimeConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmTimeProcessor, put = __cordl_internal_set__bpmTimeProcessor)) ::GlobalNamespace::IBeatToTimeConverter* _bpmTimeProcessor;

  /// @brief Method BeatToTime, addr 0x26ba808, size 0xb0, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  static inline ::GlobalNamespace::BeatToTimeConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  constexpr ::GlobalNamespace::IBeatToTimeConverter* const& __cordl_internal_get__bpmTimeProcessor() const;

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get__bpmTimeProcessor();

  constexpr void __cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value);

  /// @brief Method .ctor, addr 0x26ba7e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatToTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatToTimeConverter(BeatToTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatToTimeConverter(BeatToTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12889 };

  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ____bpmTimeProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatToTimeConverter, ____bpmTimeProcessor) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatToTimeConverter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatToTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatToTimeConverter*, "", "BeatToTimeConverter");
