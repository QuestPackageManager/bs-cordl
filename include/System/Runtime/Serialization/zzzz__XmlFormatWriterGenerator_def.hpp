#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatWriterGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlFormatWriterGenerator)
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0;
}
namespace System::Runtime::Serialization {
class XmlFormatClassWriterDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatCollectionWriterDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterGenerator_CriticalHelper;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterGenerator;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterGenerator_CriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterGenerator);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterGenerator/CriticalHelper/<>c__DisplayClass0_0
class CORDL_TYPE CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field classContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_classContract, put = __cordl_internal_set_classContract)) ::System::Runtime::Serialization::ClassDataContract* classContract;

  static inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0* New_ctor();

  /// @brief Method <GenerateClassWriter>b__0, addr 0x5fb0100, size 0x90, virtual false, abstract: false, final false
  inline void _GenerateClassWriter_b__0(::System::Runtime::Serialization::XmlWriterDelegator* xw, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx,
                                        ::System::Runtime::Serialization::ClassDataContract* ctr);

  constexpr ::System::Runtime::Serialization::ClassDataContract* const& __cordl_internal_get_classContract() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract*& __cordl_internal_get_classContract();

  constexpr void __cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value);

  /// @brief Method .ctor, addr 0x5fb00f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0(CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0(CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17100 };

  /// @brief Field classContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract* ___classContract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0, ___classContract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterGenerator/CriticalHelper/<>c__DisplayClass1_0
class CORDL_TYPE CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field collectionContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionContract, put = __cordl_internal_set_collectionContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionContract;

  static inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0* New_ctor();

  /// @brief Method <GenerateCollectionWriter>b__0, addr 0x5fb0190, size 0x90, virtual false, abstract: false, final false
  inline void _GenerateCollectionWriter_b__0(::System::Runtime::Serialization::XmlWriterDelegator* xw, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx,
                                             ::System::Runtime::Serialization::CollectionDataContract* ctr);

  constexpr ::System::Runtime::Serialization::CollectionDataContract* const& __cordl_internal_get_collectionContract() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract*& __cordl_internal_get_collectionContract();

  constexpr void __cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value);

  /// @brief Method .ctor, addr 0x5fb00fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0(CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0(CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17101 };

  /// @brief Field collectionContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract* ___collectionContract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0, ___collectionContract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterGenerator/CriticalHelper
class CORDL_TYPE XmlFormatWriterGenerator_CriticalHelper : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0;

  /// @brief Method GenerateClassWriter, addr 0x5fafe10, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* GenerateClassWriter(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GenerateCollectionWriter, addr 0x5fb0050, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* GenerateCollectionWriter(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  static inline ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* New_ctor();

  /// @brief Method .ctor, addr 0x5fafc74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterGenerator_CriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterGenerator_CriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterGenerator_CriticalHelper(XmlFormatWriterGenerator_CriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterGenerator_CriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterGenerator_CriticalHelper(XmlFormatWriterGenerator_CriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterGenerator
class CORDL_TYPE XmlFormatWriterGenerator : public ::System::Object {
public:
  // Declarations
  using CriticalHelper = ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper;

  /// @brief Field helper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* helper;

  /// @brief Method GenerateClassWriter, addr 0x5fafc78, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* GenerateClassWriter(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GenerateCollectionWriter, addr 0x5fafeb8, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* GenerateCollectionWriter(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  static inline ::System::Runtime::Serialization::XmlFormatWriterGenerator* New_ctor();

  constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* value);

  /// @brief Method .ctor, addr 0x5fafc24, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterGenerator(XmlFormatWriterGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterGenerator(XmlFormatWriterGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17103 };

  /// @brief Field helper, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterGenerator, ___helper) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterGenerator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass0_0*, "System.Runtime.Serialization",
                       "XmlFormatWriterGenerator/CriticalHelper/<>c__DisplayClass0_0");
NEED_NO_BOX(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CriticalHelper_XmlFormatWriterGenerator___c__DisplayClass1_0*, "System.Runtime.Serialization",
                       "XmlFormatWriterGenerator/CriticalHelper/<>c__DisplayClass1_0");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterGenerator*, "System.Runtime.Serialization", "XmlFormatWriterGenerator");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterGenerator_CriticalHelper*, "System.Runtime.Serialization", "XmlFormatWriterGenerator/CriticalHelper");
