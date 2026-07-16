#pragma once
// IWYU pragma private; include "GlobalNamespace/IPosesSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPosesSerializer)
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class IPosesSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IPosesSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IPosesSerializer*, "", "IPosesSerializer");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPosesSerializer
class CORDL_TYPE IPosesSerializer {
public:
  // Declarations
  /// @brief Method LoadRecording, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  /// @brief Method RecordingCanBeCreated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool RecordingCanBeCreated(::StringW path);

  /// @brief Method RecordingExists, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool RecordingExists(::StringW path);

  /// @brief Method SaveRecording, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method SaveToOldFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  // Ctor Parameters [CppParam { name: "", ty: "IPosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPosesSerializer(IPosesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
