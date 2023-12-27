#pragma once
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
// Type: ::RecordingConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5942))
// CS Name: ::RecordingConverter*
class CORDL_TYPE RecordingConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get__logger() const;

  constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  static inline ::GlobalNamespace::RecordingConverter* New_ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method .ctor addr 0x2302328 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method SaveToOldFormat addr 0x230351c size 0xec virtual false final false
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  // Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingConverter(RecordingConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingConverter(RecordingConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingConverter();

public:
  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingConverter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingConverter*, "", "RecordingConverter");
