#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PosesSerializer)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesRecordingData_TransformsKeyframe;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class RecordingConverter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesSerializer);
// Dependencies IPosesSerializer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesSerializer
class CORDL_TYPE PosesSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _recordingConverter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingConverter, put = __cordl_internal_set__recordingConverter)) ::GlobalNamespace::RecordingConverter* _recordingConverter;

  /// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
  constexpr operator ::GlobalNamespace::IPosesSerializer*() noexcept;

  /// @brief Method LoadDataFile, addr 0x3b1ad20, size 0x5f0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData_TransformsKeyframe*>* LoadDataFile(::StringW filePath);

  /// @brief Method LoadInfoFile, addr 0x3b1ab7c, size 0x1a4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingInfoSaveData* LoadInfoFile(::StringW filePath);

  /// @brief Method LoadRecording, addr 0x3b1b728, size 0x118, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  /// @brief Method LoadRecordingFromDirectory, addr 0x3b1b310, size 0x2d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingData* LoadRecordingFromDirectory(::StringW path);

  static inline ::GlobalNamespace::PosesSerializer* New_ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method RecordingCanBeCreated, addr 0x3b1bbc8, size 0x504, virtual true, abstract: false, final true
  inline bool RecordingCanBeCreated(::StringW path);

  /// @brief Method RecordingExists, addr 0x3b1b840, size 0x388, virtual true, abstract: false, final true
  inline bool RecordingExists(::StringW path);

  /// @brief Method SaveDataFile, addr 0x3b1a584, size 0x368, virtual false, abstract: false, final false
  static inline void SaveDataFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveInfoFile, addr 0x3b1a480, size 0x104, virtual false, abstract: false, final false
  static inline void SaveInfoFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveRecording, addr 0x3b1b6ec, size 0x3c, virtual true, abstract: false, final true
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method SaveRecordingIntoDirectory, addr 0x3b1a8ec, size 0x290, virtual false, abstract: false, final false
  inline void SaveRecordingIntoDirectory(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveToOldFormat, addr 0x3b1b5e4, size 0x18, virtual true, abstract: false, final true
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::GlobalNamespace::RecordingConverter* const& __cordl_internal_get__recordingConverter() const;

  constexpr ::GlobalNamespace::RecordingConverter*& __cordl_internal_get__recordingConverter();

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__recordingConverter(::GlobalNamespace::RecordingConverter* value);

  /// @brief Method .ctor, addr 0x3b1a3e0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Convert to "::GlobalNamespace::IPosesSerializer"
  constexpr ::GlobalNamespace::IPosesSerializer* i___GlobalNamespace__IPosesSerializer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesSerializer(PosesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesSerializer(PosesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5105 };

  /// @brief Field kDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDataFileName{ u"Data.rcd" };

  /// @brief Field kInfoFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kInfoFileName{ u"Info.json" };

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _recordingConverter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RecordingConverter* ____recordingConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesSerializer, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesSerializer, ____recordingConverter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesSerializer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesSerializer*, "", "PosesSerializer");
