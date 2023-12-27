#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SharedStatics)
namespace System::Security::Util {
class __Tokenizer__StringMaker;
}
// Forward declare root types
namespace System {
class SharedStatics;
}
// Write type traits
MARK_REF_PTR_T(::System::SharedStatics);
// Type: System::SharedStatics
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2569))
// CS Name: ::System::SharedStatics*
class CORDL_TYPE SharedStatics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _maker, offset 0x10, size 0x8
  __declspec(property(get = __get__maker, put = __set__maker))::System::Security::Util::__Tokenizer__StringMaker* _maker;

  /// @brief Field _sharedStatics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__sharedStatics, put = setStaticF__sharedStatics))::System::SharedStatics* _sharedStatics;

  constexpr ::System::Security::Util::__Tokenizer__StringMaker*& __get__maker();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> const& __get__maker() const;

  constexpr void __set__maker(::System::Security::Util::__Tokenizer__StringMaker* value);

  static inline void setStaticF__sharedStatics(::System::SharedStatics* value);

  static inline ::System::SharedStatics* getStaticF__sharedStatics();

  static inline ::System::SharedStatics* New_ctor();

  /// @brief Method .ctor addr 0x25f18c0 size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method GetSharedStringMaker addr 0x25f18c8 size 0x1d0 virtual false final false
  static inline ::System::Security::Util::__Tokenizer__StringMaker* GetSharedStringMaker();

  /// @brief Method ReleaseSharedStringMaker addr 0x25f1a98 size 0x150 virtual false final false
  static inline void ReleaseSharedStringMaker(ByRef<::System::Security::Util::__Tokenizer__StringMaker*> maker);

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedStatics(SharedStatics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedStatics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedStatics(SharedStatics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatics();

public:
  /// @brief Field _maker, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Util::__Tokenizer__StringMaker* ____maker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SharedStatics, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SharedStatics);
DEFINE_IL2CPP_ARG_TYPE(::System::SharedStatics*, "System", "SharedStatics");
