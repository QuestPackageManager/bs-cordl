#pragma once
// IWYU pragma private; include "System/SharedStatics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SharedStatics)
namespace System::Security::Util {
class Tokenizer_StringMaker;
}
// Forward declare root types
namespace System {
class SharedStatics;
}
// Write type traits
MARK_REF_PTR_T(::System::SharedStatics);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.SharedStatics
class CORDL_TYPE SharedStatics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _maker, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__maker, put = __cordl_internal_set__maker)) ::System::Security::Util::Tokenizer_StringMaker* _maker;

  /// @brief Field _sharedStatics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sharedStatics, put = setStaticF__sharedStatics)) ::System::SharedStatics* _sharedStatics;

  /// @brief Method GetSharedStringMaker, addr 0x3e2e028, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Security::Util::Tokenizer_StringMaker* GetSharedStringMaker();

  static inline ::System::SharedStatics* New_ctor();

  /// @brief Method ReleaseSharedStringMaker, addr 0x3e2e1f0, size 0x150, virtual false, abstract: false, final false
  static inline void ReleaseSharedStringMaker(::ByRef<::System::Security::Util::Tokenizer_StringMaker*> maker);

  constexpr ::System::Security::Util::Tokenizer_StringMaker* const& __cordl_internal_get__maker() const;

  constexpr ::System::Security::Util::Tokenizer_StringMaker*& __cordl_internal_get__maker();

  constexpr void __cordl_internal_set__maker(::System::Security::Util::Tokenizer_StringMaker* value);

  /// @brief Method .ctor, addr 0x3e2e020, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::SharedStatics* getStaticF__sharedStatics();

  static inline void setStaticF__sharedStatics(::System::SharedStatics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatics(SharedStatics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatics(SharedStatics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2570 };

  /// @brief Field _maker, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Util::Tokenizer_StringMaker* ____maker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::SharedStatics, ____maker) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::SharedStatics, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SharedStatics);
DEFINE_IL2CPP_ARG_TYPE(::System::SharedStatics*, "System", "SharedStatics");
