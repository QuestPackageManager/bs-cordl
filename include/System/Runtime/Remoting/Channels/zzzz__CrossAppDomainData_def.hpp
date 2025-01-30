#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainData)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CrossAppDomainData);
// Dependencies System.Object
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainData
class CORDL_TYPE CrossAppDomainData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DomainID)) int32_t DomainID;

  __declspec(property(get = get_ProcessID)) ::StringW ProcessID;

  /// @brief Field _ContextID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ContextID, put = __cordl_internal_set__ContextID)) ::System::Object* _ContextID;

  /// @brief Field _DomainID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__DomainID, put = __cordl_internal_set__DomainID)) int32_t _DomainID;

  /// @brief Field _processGuid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__processGuid, put = __cordl_internal_set__processGuid)) ::StringW _processGuid;

  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainData* New_ctor(int32_t domainId);

  constexpr ::System::Object* const& __cordl_internal_get__ContextID() const;

  constexpr ::System::Object*& __cordl_internal_get__ContextID();

  constexpr int32_t const& __cordl_internal_get__DomainID() const;

  constexpr int32_t& __cordl_internal_get__DomainID();

  constexpr ::StringW const& __cordl_internal_get__processGuid() const;

  constexpr ::StringW& __cordl_internal_get__processGuid();

  constexpr void __cordl_internal_set__ContextID(::System::Object* value);

  constexpr void __cordl_internal_set__DomainID(int32_t value);

  constexpr void __cordl_internal_set__processGuid(::StringW value);

  /// @brief Method .ctor, addr 0x3ce4994, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t domainId);

  /// @brief Method get_DomainID, addr 0x3ce4a3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DomainID();

  /// @brief Method get_ProcessID, addr 0x3ce4a44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProcessID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossAppDomainData(CrossAppDomainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossAppDomainData(CrossAppDomainData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3114 };

  /// @brief Field _ContextID, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____ContextID;

  /// @brief Field _DomainID, offset: 0x18, size: 0x4, def value: None
  int32_t ____DomainID;

  /// @brief Field _processGuid, offset: 0x20, size: 0x8, def value: None
  ::StringW ____processGuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainData, ____ContextID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainData, ____DomainID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainData, ____processGuid) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainData, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainData*, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
