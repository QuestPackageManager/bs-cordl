#pragma once
// IWYU pragma private; include "System/Diagnostics/Debugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Debugger)
// Forward declare root types
namespace System::Diagnostics {
class Debugger;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::Debugger*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.Debugger
class CORDL_TYPE Debugger : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultCategory, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultCategory, put = setStaticF_DefaultCategory)) ::StringW DefaultCategory;

  /// @brief Method IsLogging, addr 0x5bde92c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLogging();

  /// @brief Method Log, addr 0x5bde938, size 0x58, virtual false, abstract: false, final false
  static inline void Log(int32_t level, ::StringW category, ::StringW message);

  /// @brief Method Log_icall, addr 0x5bde934, size 0x4, virtual false, abstract: false, final false
  static inline void Log_icall(int32_t level, ::by_ref<::StringW> category, ::by_ref<::StringW> message);

  /// @brief Method NotifyOfCrossThreadDependency, addr 0x5bde990, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyOfCrossThreadDependency();

  static inline ::StringW getStaticF_DefaultCategory();

  static inline void setStaticF_DefaultCategory(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debugger(Debugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debugger(Debugger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::Debugger) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics
