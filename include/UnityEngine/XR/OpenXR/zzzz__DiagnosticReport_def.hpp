#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/DiagnosticReport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticReport)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class DiagnosticReport;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::DiagnosticReport*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::DiagnosticReport*, "UnityEngine.XR.OpenXR", "DiagnosticReport");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.DiagnosticReport
class CORDL_TYPE DiagnosticReport : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_NullSection, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_NullSection, put = setStaticF_k_NullSection)) uint64_t k_NullSection;

  /// @brief Method AddEventEntry, addr 0x69e9454, size 0xac, virtual false, abstract: false, final false
  static inline void AddEventEntry(::StringW eventName, ::StringW eventData);

  /// @brief Method AddSectionBreak, addr 0x69e93e0, size 0x74, virtual false, abstract: false, final false
  static inline void AddSectionBreak(uint64_t sectionHandle);

  /// @brief Method AddSectionEntry, addr 0x69e9324, size 0xbc, virtual false, abstract: false, final false
  static inline void AddSectionEntry(uint64_t sectionHandle, ::StringW sectionEntry, ::StringW sectionBody);

  /// @brief Method DumpReport, addr 0x69e9764, size 0x4, virtual false, abstract: false, final false
  static inline void DumpReport(::StringW reason);

  /// @brief Method GenerateReport, addr 0x69e96d4, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GenerateReport();

  /// @brief Method GetSection, addr 0x69e9294, size 0x90, virtual false, abstract: false, final false
  static inline uint64_t GetSection(::StringW sectionName);

  /// @brief Method Internal_DumpReport, addr 0x69e9500, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_DumpReport();

  /// @brief Method Internal_DumpReport, addr 0x69e9564, size 0x90, virtual false, abstract: false, final false
  static inline void Internal_DumpReport(::StringW reason);

  /// @brief Method Internal_GenerateReport, addr 0x69e95f4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GenerateReport();

  /// @brief Method Internal_ReleaseReport, addr 0x69e9658, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_ReleaseReport(::System::IntPtr report);

  static inline ::UnityEngine::XR::OpenXR::DiagnosticReport* New_ctor();

  /// @brief Method StartReport, addr 0x69e9230, size 0x64, virtual false, abstract: false, final false
  static inline void StartReport();

  /// @brief Method .ctor, addr 0x69e9768, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint64_t getStaticF_k_NullSection();

  static inline void setStaticF_k_NullSection(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticReport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticReport(DiagnosticReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticReport(DiagnosticReport const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::DiagnosticReport) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
