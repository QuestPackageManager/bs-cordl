#pragma once
// IWYU pragma private; include "System\Resources\MissingSatelliteAssemblyException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MissingSatelliteAssemblyException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Resources {
class MissingSatelliteAssemblyException;
}
// Write type traits
MARK_REF_T(::System::Resources::MissingSatelliteAssemblyException*);
DEFINE_IL2CPP_CLASS(::System::Resources::MissingSatelliteAssemblyException*, "System.Resources", "MissingSatelliteAssemblyException");
// Dependencies System.SystemException
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.MissingSatelliteAssemblyException
class CORDL_TYPE MissingSatelliteAssemblyException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _cultureName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cultureName, put = __cordl_internal_set__cultureName)) ::StringW _cultureName;

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor();

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Resources::MissingSatelliteAssemblyException* New_ctor(::StringW message, ::StringW cultureName);

  constexpr ::StringW const& __cordl_internal_get__cultureName() const;

  constexpr ::StringW& __cordl_internal_get__cultureName();

  constexpr void __cordl_internal_set__cultureName(::StringW value);

  /// @brief Method .ctor, addr 0x5b73054, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5b730e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5b730b4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW cultureName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingSatelliteAssemblyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingSatelliteAssemblyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingSatelliteAssemblyException(MissingSatelliteAssemblyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingSatelliteAssemblyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingSatelliteAssemblyException(MissingSatelliteAssemblyException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3443 };

  /// @brief Field _cultureName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____cultureName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::MissingSatelliteAssemblyException, ____cultureName) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::Resources::MissingSatelliteAssemblyException) == 0x98, "Size mismatch!");

} // namespace System::Resources
