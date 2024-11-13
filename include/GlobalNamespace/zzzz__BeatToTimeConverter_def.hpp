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
// Type: ::BeatToTimeConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatToTimeConverter*
class CORDL_TYPE BeatToTimeConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmTimeProcessor, put = __cordl_internal_set__bpmTimeProcessor)) ::GlobalNamespace::IBeatToTimeConverter* _bpmTimeProcessor;

  /// @brief Method BeatToTime, addr 0x2683844, size 0xb0, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  static inline ::GlobalNamespace::BeatToTimeConverter* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get__bpmTimeProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConverter*> const& __cordl_internal_get__bpmTimeProcessor() const;

  constexpr void __cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value);

  /// @brief Method .ctor, addr 0x268381c, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ____bpmTimeProcessor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatToTimeConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatToTimeConverter, ____bpmTimeProcessor) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatToTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatToTimeConverter*, "", "BeatToTimeConverter");
