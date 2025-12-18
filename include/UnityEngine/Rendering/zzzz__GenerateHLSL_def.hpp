#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GenerateHLSL.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__PackingRules_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenerateHLSL)
namespace UnityEngine::Rendering {
struct PackingRules;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GenerateHLSL;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GenerateHLSL);
// Dependencies System.Attribute, UnityEngine.Rendering.PackingRules
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GenerateHLSL
class CORDL_TYPE GenerateHLSL : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field constantRegister, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_constantRegister, put = __cordl_internal_set_constantRegister)) int32_t constantRegister;

  /// @brief Field containsPackedFields, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_containsPackedFields, put = __cordl_internal_set_containsPackedFields)) bool containsPackedFields;

  /// @brief Field generateCBuffer, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_generateCBuffer, put = __cordl_internal_set_generateCBuffer)) bool generateCBuffer;

  /// @brief Field needAccessors, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_needAccessors, put = __cordl_internal_set_needAccessors)) bool needAccessors;

  /// @brief Field needParamDebug, offset 0x17, size 0x1
  __declspec(property(get = __cordl_internal_get_needParamDebug, put = __cordl_internal_set_needParamDebug)) bool needParamDebug;

  /// @brief Field needSetters, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_needSetters, put = __cordl_internal_set_needSetters)) bool needSetters;

  /// @brief Field omitStructDeclaration, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_omitStructDeclaration, put = __cordl_internal_set_omitStructDeclaration)) bool omitStructDeclaration;

  /// @brief Field packingRules, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_packingRules, put = __cordl_internal_set_packingRules)) ::UnityEngine::Rendering::PackingRules packingRules;

  /// @brief Field paramDefinesStart, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_paramDefinesStart, put = __cordl_internal_set_paramDefinesStart)) int32_t paramDefinesStart;

  /// @brief Field sourcePath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sourcePath, put = __cordl_internal_set_sourcePath)) ::StringW sourcePath;

  static inline ::UnityEngine::Rendering::GenerateHLSL* New_ctor(::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug, int32_t paramDefinesStart,
                                                                 bool omitStructDeclaration, bool containsPackedFields, bool generateCBuffer, int32_t constantRegister, ::StringW sourcePath);

  constexpr int32_t const& __cordl_internal_get_constantRegister() const;

  constexpr int32_t& __cordl_internal_get_constantRegister();

  constexpr bool const& __cordl_internal_get_containsPackedFields() const;

  constexpr bool& __cordl_internal_get_containsPackedFields();

  constexpr bool const& __cordl_internal_get_generateCBuffer() const;

  constexpr bool& __cordl_internal_get_generateCBuffer();

  constexpr bool const& __cordl_internal_get_needAccessors() const;

  constexpr bool& __cordl_internal_get_needAccessors();

  constexpr bool const& __cordl_internal_get_needParamDebug() const;

  constexpr bool& __cordl_internal_get_needParamDebug();

  constexpr bool const& __cordl_internal_get_needSetters() const;

  constexpr bool& __cordl_internal_get_needSetters();

  constexpr bool const& __cordl_internal_get_omitStructDeclaration() const;

  constexpr bool& __cordl_internal_get_omitStructDeclaration();

  constexpr ::UnityEngine::Rendering::PackingRules const& __cordl_internal_get_packingRules() const;

  constexpr ::UnityEngine::Rendering::PackingRules& __cordl_internal_get_packingRules();

  constexpr int32_t const& __cordl_internal_get_paramDefinesStart() const;

  constexpr int32_t& __cordl_internal_get_paramDefinesStart();

  constexpr ::StringW const& __cordl_internal_get_sourcePath() const;

  constexpr ::StringW& __cordl_internal_get_sourcePath();

  constexpr void __cordl_internal_set_constantRegister(int32_t value);

  constexpr void __cordl_internal_set_containsPackedFields(bool value);

  constexpr void __cordl_internal_set_generateCBuffer(bool value);

  constexpr void __cordl_internal_set_needAccessors(bool value);

  constexpr void __cordl_internal_set_needParamDebug(bool value);

  constexpr void __cordl_internal_set_needSetters(bool value);

  constexpr void __cordl_internal_set_omitStructDeclaration(bool value);

  constexpr void __cordl_internal_set_packingRules(::UnityEngine::Rendering::PackingRules value);

  constexpr void __cordl_internal_set_paramDefinesStart(int32_t value);

  constexpr void __cordl_internal_set_sourcePath(::StringW value);

  /// @brief Method .ctor, addr 0x65ec0d4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug, int32_t paramDefinesStart, bool omitStructDeclaration,
                    bool containsPackedFields, bool generateCBuffer, int32_t constantRegister, ::StringW sourcePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenerateHLSL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenerateHLSL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenerateHLSL(GenerateHLSL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenerateHLSL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenerateHLSL(GenerateHLSL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12176 };

  /// @brief Field packingRules, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::PackingRules ___packingRules;

  /// @brief Field containsPackedFields, offset: 0x14, size: 0x1, def value: None
  bool ___containsPackedFields;

  /// @brief Field needAccessors, offset: 0x15, size: 0x1, def value: None
  bool ___needAccessors;

  /// @brief Field needSetters, offset: 0x16, size: 0x1, def value: None
  bool ___needSetters;

  /// @brief Field needParamDebug, offset: 0x17, size: 0x1, def value: None
  bool ___needParamDebug;

  /// @brief Field paramDefinesStart, offset: 0x18, size: 0x4, def value: None
  int32_t ___paramDefinesStart;

  /// @brief Field omitStructDeclaration, offset: 0x1c, size: 0x1, def value: None
  bool ___omitStructDeclaration;

  /// @brief Field generateCBuffer, offset: 0x1d, size: 0x1, def value: None
  bool ___generateCBuffer;

  /// @brief Field constantRegister, offset: 0x20, size: 0x4, def value: None
  int32_t ___constantRegister;

  /// @brief Field sourcePath, offset: 0x28, size: 0x8, def value: None
  ::StringW ___sourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___packingRules) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___containsPackedFields) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___needAccessors) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___needSetters) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___needParamDebug) == 0x17, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___paramDefinesStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___omitStructDeclaration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___generateCBuffer) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___constantRegister) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GenerateHLSL, ___sourcePath) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GenerateHLSL, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GenerateHLSL);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GenerateHLSL*, "UnityEngine.Rendering", "GenerateHLSL");
