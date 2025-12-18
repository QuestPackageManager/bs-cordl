#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatReaderGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlFormatReaderGenerator)
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0;
}
namespace System::Runtime::Serialization {
class XmlFormatClassReaderDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatCollectionReaderDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatGetOnlyCollectionReaderDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatReaderGenerator_CriticalHelper;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0;
}
namespace System::Runtime::Serialization {
class CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0;
}
namespace System::Runtime::Serialization {
class XmlFormatReaderGenerator;
}
namespace System::Runtime::Serialization {
class XmlFormatReaderGenerator_CriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatReaderGenerator);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass0_0
class CORDL_TYPE CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field classContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_classContract, put = __cordl_internal_set_classContract)) ::System::Runtime::Serialization::ClassDataContract* classContract;

  static inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0* New_ctor();

  /// @brief Method <GenerateClassReader>b__0, addr 0x5faf7d4, size 0x88, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateClassReader_b__0(::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx,
                                                     ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
                                                     ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces);

  constexpr ::System::Runtime::Serialization::ClassDataContract* const& __cordl_internal_get_classContract() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract*& __cordl_internal_get_classContract();

  constexpr void __cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value);

  /// @brief Method .ctor, addr 0x5faf7c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17093 };

  /// @brief Field classContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract* ___classContract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0, ___classContract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass1_0
class CORDL_TYPE CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field collectionContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionContract, put = __cordl_internal_set_collectionContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionContract;

  static inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0* New_ctor();

  /// @brief Method <GenerateCollectionReader>b__0, addr 0x5faf85c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Object* _GenerateCollectionReader_b__0(::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx,
                                                          ::System::Xml::XmlDictionaryString* inm, ::System::Xml::XmlDictionaryString* ins,
                                                          ::System::Runtime::Serialization::CollectionDataContract* cc);

  constexpr ::System::Runtime::Serialization::CollectionDataContract* const& __cordl_internal_get_collectionContract() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract*& __cordl_internal_get_collectionContract();

  constexpr void __cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value);

  /// @brief Method .ctor, addr 0x5faf7cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17094 };

  /// @brief Field collectionContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract* ___collectionContract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0, ___collectionContract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass2_0
class CORDL_TYPE CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field collectionContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionContract, put = __cordl_internal_set_collectionContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionContract;

  static inline ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0* New_ctor();

  /// @brief Method <GenerateGetOnlyCollectionReader>b__0, addr 0x5faf8e8, size 0x84, virtual false, abstract: false, final false
  inline void _GenerateGetOnlyCollectionReader_b__0(::System::Runtime::Serialization::XmlReaderDelegator* xr, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ctx,
                                                    ::System::Xml::XmlDictionaryString* inm, ::System::Xml::XmlDictionaryString* ins, ::System::Runtime::Serialization::CollectionDataContract* cc);

  constexpr ::System::Runtime::Serialization::CollectionDataContract* const& __cordl_internal_get_collectionContract() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract*& __cordl_internal_get_collectionContract();

  constexpr void __cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value);

  /// @brief Method .ctor, addr 0x5faf7d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0(CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17095 };

  /// @brief Field collectionContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract* ___collectionContract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0, ___collectionContract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderGenerator/CriticalHelper
class CORDL_TYPE XmlFormatReaderGenerator_CriticalHelper : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0;

  /// @brief Method GenerateClassReader, addr 0x5faf224, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* GenerateClassReader(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GenerateCollectionReader, addr 0x5faf464, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* GenerateCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method GenerateGetOnlyCollectionReader, addr 0x5faf6a4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* GenerateGetOnlyCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  static inline ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* New_ctor();

  /// @brief Method .ctor, addr 0x5faf088, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatReaderGenerator_CriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderGenerator_CriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatReaderGenerator_CriticalHelper(XmlFormatReaderGenerator_CriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderGenerator_CriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatReaderGenerator_CriticalHelper(XmlFormatReaderGenerator_CriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderGenerator
class CORDL_TYPE XmlFormatReaderGenerator : public ::System::Object {
public:
  // Declarations
  using CriticalHelper = ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper;

  /// @brief Field helper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* helper;

  /// @brief Method GenerateClassReader, addr 0x5faf08c, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* GenerateClassReader(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GenerateCollectionReader, addr 0x5faf2cc, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* GenerateCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method GenerateGetOnlyCollectionReader, addr 0x5faf50c, size 0x198, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* GenerateGetOnlyCollectionReader(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  static inline ::System::Runtime::Serialization::XmlFormatReaderGenerator* New_ctor();

  /// @brief Method UnsafeGetUninitializedObject, addr 0x5faf74c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Object* UnsafeGetUninitializedObject(int32_t id);

  constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* value);

  /// @brief Method .ctor, addr 0x5faf038, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatReaderGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatReaderGenerator(XmlFormatReaderGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatReaderGenerator(XmlFormatReaderGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17097 };

  /// @brief Field helper, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderGenerator, ___helper) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatReaderGenerator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass0_0*, "System.Runtime.Serialization",
                       "XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass0_0");
NEED_NO_BOX(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass1_0*, "System.Runtime.Serialization",
                       "XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass1_0");
NEED_NO_BOX(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CriticalHelper_XmlFormatReaderGenerator___c__DisplayClass2_0*, "System.Runtime.Serialization",
                       "XmlFormatReaderGenerator/CriticalHelper/<>c__DisplayClass2_0");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatReaderGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatReaderGenerator*, "System.Runtime.Serialization", "XmlFormatReaderGenerator");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatReaderGenerator_CriticalHelper*, "System.Runtime.Serialization", "XmlFormatReaderGenerator/CriticalHelper");
