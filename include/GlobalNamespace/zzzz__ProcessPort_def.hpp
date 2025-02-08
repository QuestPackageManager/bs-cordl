#pragma once
// IWYU pragma private; include "GlobalNamespace/ProcessPort.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessPort)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ProcessPort;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProcessPort);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProcessPort
class CORDL_TYPE ProcessPort : public ::System::Object {
public:
  // Declarations
  /// @brief Field <portNumber>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__portNumber_k__BackingField, put = __cordl_internal_set__portNumber_k__BackingField)) ::StringW _portNumber_k__BackingField;

  /// @brief Field <processId>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__processId_k__BackingField, put = __cordl_internal_set__processId_k__BackingField)) int32_t _processId_k__BackingField;

  /// @brief Field <processName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__processName_k__BackingField, put = __cordl_internal_set__processName_k__BackingField)) ::StringW _processName_k__BackingField;

  /// @brief Field <protocol>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__protocol_k__BackingField, put = __cordl_internal_set__protocol_k__BackingField)) ::StringW _protocol_k__BackingField;

  __declspec(property(get = get_portNumber, put = set_portNumber)) ::StringW portNumber;

  __declspec(property(get = get_processId, put = set_processId)) int32_t processId;

  __declspec(property(get = get_processName, put = set_processName)) ::StringW processName;

  __declspec(property(get = get_protocol, put = set_protocol)) ::StringW protocol;

  /// @brief Method GetProcessesByPort, addr 0x402d4fc, size 0xae4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::ProcessPort*>* GetProcessesByPort(::StringW targetPort);

  /// @brief Method LookupProcess, addr 0x402d430, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW LookupProcess(int32_t pid);

  static inline ::GlobalNamespace::ProcessPort* New_ctor();

  /// @brief Method ToString, addr 0x402d288, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__portNumber_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__portNumber_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__processId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__processId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__processName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__processName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__protocol_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__protocol_k__BackingField();

  constexpr void __cordl_internal_set__portNumber_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__processId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__processName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__protocol_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x402dfe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_portNumber, addr 0x402d410, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_portNumber();

  /// @brief Method get_processId, addr 0x402d400, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_processId();

  /// @brief Method get_processName, addr 0x402d3f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_processName();

  /// @brief Method get_protocol, addr 0x402d420, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_protocol();

  /// @brief Method set_portNumber, addr 0x402d418, size 0x8, virtual false, abstract: false, final false
  inline void set_portNumber(::StringW value);

  /// @brief Method set_processId, addr 0x402d408, size 0x8, virtual false, abstract: false, final false
  inline void set_processId(int32_t value);

  /// @brief Method set_processName, addr 0x402d3f8, size 0x8, virtual false, abstract: false, final false
  inline void set_processName(::StringW value);

  /// @brief Method set_protocol, addr 0x402d428, size 0x8, virtual false, abstract: false, final false
  inline void set_protocol(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessPort();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessPort", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessPort(ProcessPort&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessPort", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessPort(ProcessPort const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8380 };

  /// @brief Field <processName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____processName_k__BackingField;

  /// @brief Field <processId>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____processId_k__BackingField;

  /// @brief Field <portNumber>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____portNumber_k__BackingField;

  /// @brief Field <protocol>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____protocol_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProcessPort, ____processName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessPort, ____processId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessPort, ____portNumber_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessPort, ____protocol_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProcessPort, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProcessPort);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProcessPort*, "", "ProcessPort");
