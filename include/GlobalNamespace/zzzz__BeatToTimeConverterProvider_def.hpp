#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatToTimeConverterProvider)
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatToTimeConverterProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatToTimeConverterProvider);
// Type: ::BeatToTimeConverterProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatToTimeConverterProvider*
class CORDL_TYPE BeatToTimeConverterProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpmTimeProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bpmTimeProcessor, put = __cordl_internal_set__bpmTimeProcessor))::GlobalNamespace::IBeatToTimeConverter* _bpmTimeProcessor;

  /// @brief Method BeatToTime, addr 0x13bb1f0, size 0xb0, virtual false, abstract: false, final false
  inline float_t BeatToTime(float_t beat);

  static inline ::GlobalNamespace::BeatToTimeConverterProvider* New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get__bpmTimeProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConverter*> const& __cordl_internal_get__bpmTimeProcessor() const;

  constexpr void __cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::IBeatToTimeConverter* value);

  /// @brief Method .ctor, addr 0x13bb1c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatToTimeConverterProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeConverterProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatToTimeConverterProvider(BeatToTimeConverterProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatToTimeConverterProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatToTimeConverterProvider(BeatToTimeConverterProvider const&) = delete;

  /// @brief Field _bpmTimeProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ____bpmTimeProcessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatToTimeConverterProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatToTimeConverterProvider, ____bpmTimeProcessor) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatToTimeConverterProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatToTimeConverterProvider*, "", "BeatToTimeConverterProvider");
