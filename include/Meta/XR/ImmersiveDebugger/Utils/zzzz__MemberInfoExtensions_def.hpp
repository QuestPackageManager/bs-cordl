#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/MemberInfoExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemberInfoExtensions)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class MemberInfoExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions
class CORDL_TYPE MemberInfoExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method BuildSignatureForDebugInspector, addr 0x5832708, size 0x5ac, virtual false, abstract: false, final false
  static inline ::StringW BuildSignatureForDebugInspector(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CanBeChanged, addr 0x5832e1c, size 0x2c, virtual false, abstract: false, final false
  static inline bool CanBeChanged(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetDataType, addr 0x58321b0, size 0x150, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataType(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetValue, addr 0x5831e20, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Object* GetValue(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance);

  /// @brief Method IsBaseTypeEqual, addr 0x5832cb4, size 0x168, virtual false, abstract: false, final false
  static inline bool IsBaseTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type);

  /// @brief Method IsCompatibleWithDebugInspector, addr 0x582b994, size 0x21c, virtual false, abstract: false, final false
  static inline bool IsCompatibleWithDebugInspector(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsPublic, addr 0x5832524, size 0x1e4, virtual false, abstract: false, final false
  static inline bool IsPublic(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsStatic, addr 0x5832300, size 0x224, virtual false, abstract: false, final false
  static inline bool IsStatic(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsTypeEqual, addr 0x582c278, size 0x13c, virtual false, abstract: false, final false
  static inline bool IsTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type);

  /// @brief Method SetValue, addr 0x5831fe8, size 0x1c8, virtual false, abstract: false, final false
  static inline void SetValue(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberInfoExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberInfoExtensions(MemberInfoExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberInfoExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberInfoExtensions(MemberInfoExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*, "Meta.XR.ImmersiveDebugger.Utils", "MemberInfoExtensions");
