#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ControllerProfileFileModel)
namespace BeatSaber::GameSettings {
class ControllerProfilesSaveData;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfileFileModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfileFileModel);
// Dependencies System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfileFileModel
class CORDL_TYPE ControllerProfileFileModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  __declspec(property(get = get_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Method LoadAsync, addr 0x31c1d94, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* LoadAsync();

  static inline ::BeatSaber::GameSettings::ControllerProfileFileModel* New_ctor();

  /// @brief Method SaveAsync, addr 0x31c1e04, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync(::BeatSaber::GameSettings::ControllerProfilesSaveData* profileSaveDataContainer);

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  /// @brief Method .ctor, addr 0x31c1e70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fileStorage, addr 0x31c1d3c, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IFileStorage* get_fileStorage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfileFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfileFileModel(ControllerProfileFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfileFileModel(ControllerProfileFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21872 };

  /// @brief Field kFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kFileName{ u"ControllerProfiles.dat" };

  /// @brief Field _fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel, ____fileStorage) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfileFileModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfileFileModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfileFileModel*, "BeatSaber.GameSettings", "ControllerProfileFileModel");
