#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Utils\MemberInfoExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*, "Meta.XR.ImmersiveDebugger.Utils", "MemberInfoExtensions");
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions
class CORDL_TYPE MemberInfoExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method BuildSignatureForDebugInspector, addr 0x5a486b8, size 0x5ac, virtual false, abstract: false, final false
  static inline ::StringW BuildSignatureForDebugInspector(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CanBeChanged, addr 0x5a48dcc, size 0x2c, virtual false, abstract: false, final false
  static inline bool CanBeChanged(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetDataType, addr 0x5a48160, size 0x150, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataType(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetValue, addr 0x5a47dd0, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Object* GetValue(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance);

  /// @brief Method IsBaseTypeEqual, addr 0x5a48c64, size 0x168, virtual false, abstract: false, final false
  static inline bool IsBaseTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type);

  /// @brief Method IsCompatibleWithDebugInspector, addr 0x5a41944, size 0x21c, virtual false, abstract: false, final false
  static inline bool IsCompatibleWithDebugInspector(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsPublic, addr 0x5a484d4, size 0x1e4, virtual false, abstract: false, final false
  static inline bool IsPublic(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsStatic, addr 0x5a482b0, size 0x224, virtual false, abstract: false, final false
  static inline bool IsStatic(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method IsTypeEqual, addr 0x5a42228, size 0x13c, virtual false, abstract: false, final false
  static inline bool IsTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type);

  /// @brief Method SetValue, addr 0x5a47f98, size 0x1c8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18352 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions) == 0x10, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
