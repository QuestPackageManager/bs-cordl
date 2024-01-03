#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PosesSerializer)
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
namespace GlobalNamespace {
class __PosesRecordingData__TransformsKeyframe;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class RecordingConverter;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesSerializer);
// Type: ::PosesSerializer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5941))
// CS Name: ::PosesSerializer*
class CORDL_TYPE PosesSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _recordingConverter, offset 0x18, size 0x8
  __declspec(property(get = __get__recordingConverter, put = __set__recordingConverter))::GlobalNamespace::RecordingConverter* _recordingConverter;

  /// @brief Convert operator to "::GlobalNamespace::IPosesSerializer"
  constexpr operator ::GlobalNamespace::IPosesSerializer*() noexcept;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get__logger() const;

  constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr ::GlobalNamespace::RecordingConverter*& __get__recordingConverter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingConverter*> const& __get__recordingConverter() const;

  constexpr void __set__recordingConverter(::GlobalNamespace::RecordingConverter* value);

  static inline ::GlobalNamespace::PosesSerializer* New_ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method .ctor, addr 0x23022a8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method SaveInfoFile, addr 0x2302350, size 0x104, virtual false, abstract: false, final false
  static inline void SaveInfoFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveDataFile, addr 0x2302454, size 0x368, virtual false, abstract: false, final false
  static inline void SaveDataFile(::StringW filePath, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveRecordingIntoDirectory, addr 0x23027bc, size 0x2a0, virtual false, abstract: false, final false
  inline void SaveRecordingIntoDirectory(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method LoadInfoFile, addr 0x2302a5c, size 0x1a4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingInfoSaveData* LoadInfoFile(::StringW filePath);

  /// @brief Method LoadDataFile, addr 0x2302c00, size 0x5fc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PosesRecordingData__TransformsKeyframe*>* LoadDataFile(::StringW filePath);

  /// @brief Method LoadRecordingFromDirectory, addr 0x23031fc, size 0x308, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PosesRecordingData* LoadRecordingFromDirectory(::StringW path);

  /// @brief Method SaveToOldFormat, addr 0x2303504, size 0x18, virtual true, abstract: false, final true
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  /// @brief Method SaveRecording, addr 0x2303608, size 0x3c, virtual true, abstract: false, final true
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method LoadRecording, addr 0x2303644, size 0x118, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  /// @brief Method RecordingExists, addr 0x230375c, size 0x340, virtual true, abstract: false, final true
  inline bool RecordingExists(::StringW path);

  /// @brief Method RecordingCanBeCreated, addr 0x2303a9c, size 0x4d4, virtual true, abstract: false, final true
  inline bool RecordingCanBeCreated(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesSerializer(PosesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesSerializer(PosesSerializer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesSerializer();

public:
  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _recordingConverter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RecordingConverter* ____recordingConverter;

  /// @brief Field kInfoFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kInfoFileName{ u"Info.json" };

  /// @brief Field kDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDataFileName{ u"Data.rcd" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesSerializer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesSerializer, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesSerializer, ____recordingConverter) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesSerializer*, "", "PosesSerializer");
