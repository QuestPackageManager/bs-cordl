#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvoyInfo)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class EnvoyInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::EnvoyInfo);
// Type: System.Runtime.Remoting::EnvoyInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3056))
// CS Name: ::System.Runtime.Remoting::EnvoyInfo*
class CORDL_TYPE EnvoyInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field envoySinks, offset 0x10, size 0x8
  __declspec(property(get = __get_envoySinks, put = __set_envoySinks))::System::Runtime::Remoting::Messaging::IMessageSink* envoySinks;

  __declspec(property(get = get_EnvoySinks))::System::Runtime::Remoting::Messaging::IMessageSink* EnvoySinks;

  /// @brief Convert operator to "::System::Runtime::Remoting::IEnvoyInfo"
  constexpr operator ::System::Runtime::Remoting::IEnvoyInfo*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::IEnvoyInfo"
  constexpr ::System::Runtime::Remoting::IEnvoyInfo* i___System__Runtime__Remoting__IEnvoyInfo() noexcept;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get_envoySinks();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get_envoySinks() const;

  constexpr void __set_envoySinks(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  static inline ::System::Runtime::Remoting::EnvoyInfo* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks);

  /// @brief Method .ctor, addr 0x2485038, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks);

  /// @brief Method get_EnvoySinks, addr 0x2485060, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();

  // Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvoyInfo(EnvoyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvoyInfo(EnvoyInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvoyInfo();

public:
  /// @brief Field envoySinks, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ___envoySinks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::EnvoyInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::EnvoyInfo, ___envoySinks) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::EnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::EnvoyInfo*, "System.Runtime.Remoting", "EnvoyInfo");
