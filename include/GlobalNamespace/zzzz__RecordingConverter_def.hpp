#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RecordingConverter)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingConverter);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingConverter
class CORDL_TYPE RecordingConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::GlobalNamespace::IBeatSaberLogger* _logger;

  static inline ::GlobalNamespace::RecordingConverter* New_ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method SaveToOldFormat, addr 0x3b17c38, size 0xf0, virtual false, abstract: false, final false
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  /// @brief Method .ctor, addr 0x3b16a94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberLogger* logger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingConverter(RecordingConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingConverter(RecordingConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5110 };

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingConverter, ____logger) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingConverter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingConverter*, "", "RecordingConverter");
