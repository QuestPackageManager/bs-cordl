#pragma once
// IWYU pragma private; include "System/Net/Authorization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Authorization)
// Forward declare root types
namespace System::Net {
class Authorization;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Authorization);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Authorization
class CORDL_TYPE Authorization : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Complete)) bool Complete;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field ModuleAuthenticationType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ModuleAuthenticationType, put = __cordl_internal_set_ModuleAuthenticationType)) ::StringW ModuleAuthenticationType;

  /// @brief Field m_Complete, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Complete, put = __cordl_internal_set_m_Complete)) bool m_Complete;

  /// @brief Field m_Message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Message, put = __cordl_internal_set_m_Message)) ::StringW m_Message;

  static inline ::System::Net::Authorization* New_ctor(::StringW token);

  static inline ::System::Net::Authorization* New_ctor(::StringW token, bool finished);

  constexpr ::StringW const& __cordl_internal_get_ModuleAuthenticationType() const;

  constexpr ::StringW& __cordl_internal_get_ModuleAuthenticationType();

  constexpr bool const& __cordl_internal_get_m_Complete() const;

  constexpr bool& __cordl_internal_get_m_Complete();

  constexpr ::StringW const& __cordl_internal_get_m_Message() const;

  constexpr ::StringW& __cordl_internal_get_m_Message();

  constexpr void __cordl_internal_set_ModuleAuthenticationType(::StringW value);

  constexpr void __cordl_internal_set_m_Complete(bool value);

  constexpr void __cordl_internal_set_m_Message(::StringW value);

  /// @brief Method .ctor, addr 0x449e820, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW token);

  /// @brief Method .ctor, addr 0x449e8c4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW token, bool finished);

  /// @brief Method get_Complete, addr 0x449e960, size 0x8, virtual false, abstract: false, final false
  inline bool get_Complete();

  /// @brief Method get_Message, addr 0x449e958, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Authorization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Authorization(Authorization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Authorization(Authorization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9579 };

  /// @brief Field m_Message, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Message;

  /// @brief Field m_Complete, offset: 0x18, size: 0x1, def value: None
  bool ___m_Complete;

  /// @brief Field ModuleAuthenticationType, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ModuleAuthenticationType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Authorization, ___m_Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___m_Complete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Authorization, ___ModuleAuthenticationType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Authorization, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Authorization);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Authorization*, "System.Net", "Authorization");
