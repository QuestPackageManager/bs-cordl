#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticReport)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class DiagnosticReport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::DiagnosticReport);
// Type: UnityEngine.XR.OpenXR::DiagnosticReport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14405))
// CS Name: ::UnityEngine.XR.OpenXR::DiagnosticReport*
class CORDL_TYPE DiagnosticReport : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_NullSection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_NullSection, put = setStaticF_k_NullSection)) uint64_t k_NullSection;

  static inline void setStaticF_k_NullSection(uint64_t value);

  static inline uint64_t getStaticF_k_NullSection();

  /// @brief Method StartReport addr 0x2afbe58 size 0x64 virtual false final false
  static inline void StartReport();

  /// @brief Method GetSection addr 0x2afbebc size 0x8c virtual false final false
  static inline uint64_t GetSection(::StringW sectionName);

  /// @brief Method AddSectionEntry addr 0x2afbf48 size 0xb4 virtual false final false
  static inline void AddSectionEntry(uint64_t sectionHandle, ::StringW sectionEntry, ::StringW sectionBody);

  /// @brief Method AddSectionBreak addr 0x2afbffc size 0x74 virtual false final false
  static inline void AddSectionBreak(uint64_t sectionHandle);

  /// @brief Method AddEventEntry addr 0x2afc070 size 0xa4 virtual false final false
  static inline void AddEventEntry(::StringW eventName, ::StringW eventData);

  /// @brief Method Internal_DumpReport addr 0x2afc114 size 0x64 virtual false final false
  static inline void Internal_DumpReport();

  /// @brief Method Internal_DumpReport addr 0x2afc178 size 0x8c virtual false final false
  static inline void Internal_DumpReport(::StringW reason);

  /// @brief Method Internal_GenerateReport addr 0x2afc204 size 0x68 virtual false final false
  static inline void* Internal_GenerateReport();

  /// @brief Method Internal_ReleaseReport addr 0x2afc26c size 0x7c virtual false final false
  static inline void Internal_ReleaseReport(void* report);

  /// @brief Method GenerateReport addr 0x2afc2e8 size 0xb4 virtual false final false
  static inline ::StringW GenerateReport();

  /// @brief Method DumpReport addr 0x2afc39c size 0x4 virtual false final false
  static inline void DumpReport(::StringW reason);

  static inline ::UnityEngine::XR::OpenXR::DiagnosticReport* New_ctor();

  /// @brief Method .ctor addr 0x2afc3a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticReport(DiagnosticReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticReport(DiagnosticReport const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticReport();

public:
  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::DiagnosticReport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::DiagnosticReport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::DiagnosticReport*, "UnityEngine.XR.OpenXR", "DiagnosticReport");
