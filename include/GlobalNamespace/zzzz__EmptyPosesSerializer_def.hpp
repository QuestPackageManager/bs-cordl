#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EmptyPosesSerializer)
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyPosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyPosesSerializer);
// Type: ::EmptyPosesSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5915))
// CS Name: ::EmptyPosesSerializer*
class CORDL_TYPE EmptyPosesSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
  constexpr operator ::GlobalNamespace::IPosesSerializer*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPosesSerializer"
  constexpr ::GlobalNamespace::IPosesSerializer* i___GlobalNamespace__IPosesSerializer() noexcept;

  /// @brief Method SaveToOldFormat, addr 0x22fef54, size 0x4, virtual true, abstract: false, final true
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveRecording, addr 0x22fef58, size 0x4, virtual true, abstract: false, final true
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method LoadRecording, addr 0x22fef5c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  /// @brief Method RecordingExists, addr 0x22fef64, size 0x8, virtual true, abstract: false, final true
  inline bool RecordingExists(::StringW path);

  /// @brief Method RecordingCanBeCreated, addr 0x22fef6c, size 0x8, virtual true, abstract: false, final true
  inline bool RecordingCanBeCreated(::StringW path);

  static inline ::GlobalNamespace::EmptyPosesSerializer* New_ctor();

  /// @brief Method .ctor, addr 0x22fef74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyPosesSerializer(EmptyPosesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyPosesSerializer(EmptyPosesSerializer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyPosesSerializer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyPosesSerializer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyPosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyPosesSerializer*, "", "EmptyPosesSerializer");
