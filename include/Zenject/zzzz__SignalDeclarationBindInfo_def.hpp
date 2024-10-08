#pragma once
// IWYU pragma private; include "Zenject/SignalDeclarationBindInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalDeclarationBindInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclarationBindInfo);
// Type: Zenject::SignalDeclarationBindInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SignalDeclarationBindInfo*
class CORDL_TYPE SignalDeclarationBindInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Identifier, put = set_Identifier)) ::System::Object* Identifier;

  __declspec(property(get = get_MissingHandlerResponse, put = set_MissingHandlerResponse)) ::Zenject::SignalMissingHandlerResponses MissingHandlerResponse;

  __declspec(property(get = get_RunAsync, put = set_RunAsync)) bool RunAsync;

  __declspec(property(get = get_SignalType, put = set_SignalType)) ::System::Type* SignalType;

  __declspec(property(get = get_TickPriority, put = set_TickPriority)) int32_t TickPriority;

  /// @brief Field <Identifier>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Identifier_k__BackingField, put = __cordl_internal_set__Identifier_k__BackingField)) ::System::Object* _Identifier_k__BackingField;

  /// @brief Field <MissingHandlerResponse>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__MissingHandlerResponse_k__BackingField,
                      put = __cordl_internal_set__MissingHandlerResponse_k__BackingField)) ::Zenject::SignalMissingHandlerResponses _MissingHandlerResponse_k__BackingField;

  /// @brief Field <RunAsync>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__RunAsync_k__BackingField, put = __cordl_internal_set__RunAsync_k__BackingField)) bool _RunAsync_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SignalType_k__BackingField, put = __cordl_internal_set__SignalType_k__BackingField)) ::System::Type* _SignalType_k__BackingField;

  /// @brief Field <TickPriority>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__TickPriority_k__BackingField, put = __cordl_internal_set__TickPriority_k__BackingField)) int32_t _TickPriority_k__BackingField;

  static inline ::Zenject::SignalDeclarationBindInfo* New_ctor(::System::Type* signalType);

  constexpr ::System::Object*& __cordl_internal_get__Identifier_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Identifier_k__BackingField() const;

  constexpr ::Zenject::SignalMissingHandlerResponses const& __cordl_internal_get__MissingHandlerResponse_k__BackingField() const;

  constexpr ::Zenject::SignalMissingHandlerResponses& __cordl_internal_get__MissingHandlerResponse_k__BackingField();

  constexpr bool const& __cordl_internal_get__RunAsync_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RunAsync_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__SignalType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__SignalType_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__TickPriority_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TickPriority_k__BackingField();

  constexpr void __cordl_internal_set__Identifier_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__MissingHandlerResponse_k__BackingField(::Zenject::SignalMissingHandlerResponses value);

  constexpr void __cordl_internal_set__RunAsync_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SignalType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__TickPriority_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x4a7fb60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* signalType);

  /// @brief Method get_Identifier, addr 0x4a7fb88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Identifier();

  /// @brief Method get_MissingHandlerResponse, addr 0x4a7fbcc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalMissingHandlerResponses get_MissingHandlerResponse();

  /// @brief Method get_RunAsync, addr 0x4a7fba8, size 0x8, virtual false, abstract: false, final false
  inline bool get_RunAsync();

  /// @brief Method get_SignalType, addr 0x4a7fb98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_SignalType();

  /// @brief Method get_TickPriority, addr 0x4a7fbbc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TickPriority();

  /// @brief Method set_Identifier, addr 0x4a7fb90, size 0x8, virtual false, abstract: false, final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method set_MissingHandlerResponse, addr 0x4a7fbd4, size 0x8, virtual false, abstract: false, final false
  inline void set_MissingHandlerResponse(::Zenject::SignalMissingHandlerResponses value);

  /// @brief Method set_RunAsync, addr 0x4a7fbb0, size 0xc, virtual false, abstract: false, final false
  inline void set_RunAsync(bool value);

  /// @brief Method set_SignalType, addr 0x4a7fba0, size 0x8, virtual false, abstract: false, final false
  inline void set_SignalType(::System::Type* value);

  /// @brief Method set_TickPriority, addr 0x4a7fbc4, size 0x8, virtual false, abstract: false, final false
  inline void set_TickPriority(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclarationBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclarationBindInfo(SignalDeclarationBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclarationBindInfo(SignalDeclarationBindInfo const&) = delete;

  /// @brief Field <Identifier>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Identifier_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____SignalType_k__BackingField;

  /// @brief Field <RunAsync>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____RunAsync_k__BackingField;

  /// @brief Field <TickPriority>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____TickPriority_k__BackingField;

  /// @brief Field <MissingHandlerResponse>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::Zenject::SignalMissingHandlerResponses ____MissingHandlerResponse_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11953 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclarationBindInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationBindInfo, ____Identifier_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationBindInfo, ____SignalType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationBindInfo, ____RunAsync_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationBindInfo, ____TickPriority_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationBindInfo, ____MissingHandlerResponse_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalDeclarationBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationBindInfo*, "Zenject", "SignalDeclarationBindInfo");
