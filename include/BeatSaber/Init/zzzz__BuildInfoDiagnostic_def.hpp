#pragma once
// IWYU pragma private; include "BeatSaber/Init/BuildInfoDiagnostic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuildInfoDiagnostic)
// Forward declare root types
namespace BeatSaber::Init {
class BuildInfoDiagnostic;
}
// Write type traits
MARK_REF_T(::BeatSaber::Init::BuildInfoDiagnostic*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Init::BuildInfoDiagnostic*, "BeatSaber.Init", "BuildInfoDiagnostic");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.BuildInfoDiagnostic
class CORDL_TYPE BuildInfoDiagnostic : public ::System::Object {
public:
  // Declarations
  /// @brief Method CollectAndFormat, addr 0x3540dac, size 0x2e8, virtual false, abstract: false, final false
  static inline ::StringW CollectAndFormat();

  /// @brief Method Format, addr 0x354144c, size 0x2f4, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW gameVersion, ::StringW contentVersion, uint64_t buildId, ::StringW platform, ::StringW platformVersion, ::StringW prerelease, ::StringW buildLabel,
                                 ::StringW unityVersion, ::StringW buildGuid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildInfoDiagnostic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuildInfoDiagnostic", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuildInfoDiagnostic(BuildInfoDiagnostic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuildInfoDiagnostic", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuildInfoDiagnostic(BuildInfoDiagnostic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Init::BuildInfoDiagnostic) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Init
