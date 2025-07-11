#pragma once
// IWYU pragma private; include "GlobalNamespace/EmptyPosesSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EmptyPosesSerializer)
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyPosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyPosesSerializer);
// Dependencies IPosesSerializer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EmptyPosesSerializer
class CORDL_TYPE EmptyPosesSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
  constexpr operator ::GlobalNamespace::IPosesSerializer*() noexcept;

  /// @brief Method LoadRecording, addr 0x3b18270, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  static inline ::GlobalNamespace::EmptyPosesSerializer* New_ctor();

  /// @brief Method RecordingCanBeCreated, addr 0x3b18280, size 0x8, virtual true, abstract: false, final true
  inline bool RecordingCanBeCreated(::StringW path);

  /// @brief Method RecordingExists, addr 0x3b18278, size 0x8, virtual true, abstract: false, final true
  inline bool RecordingExists(::StringW path);

  /// @brief Method SaveRecording, addr 0x3b1826c, size 0x4, virtual true, abstract: false, final true
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method SaveToOldFormat, addr 0x3b18268, size 0x4, virtual true, abstract: false, final true
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method .ctor, addr 0x3b18288, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IPosesSerializer"
  constexpr ::GlobalNamespace::IPosesSerializer* i___GlobalNamespace__IPosesSerializer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyPosesSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyPosesSerializer(EmptyPosesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyPosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyPosesSerializer(EmptyPosesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5083 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyPosesSerializer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyPosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyPosesSerializer*, "", "EmptyPosesSerializer");
