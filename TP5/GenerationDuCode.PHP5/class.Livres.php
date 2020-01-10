<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.Livres.php
 *
 * $Id$
 *
 * This file is part of untitledModel.
 *
 * Automatically generated on 15.12.2019, 11:45:19 with ArgoUML PHP module 
 * (last revised $Date: 2010-01-12 20:14:42 +0100 (Tue, 12 Jan 2010) $)
 *
 * @author firstname and lastname of author, <author@example.org>
 */

if (0 > version_compare(PHP_VERSION, '5')) {
    die('This file was generated for PHP 5');
}

/**
 * include Adehrents
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Adehrents.php');

/**
 * include Volumes
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Volumes.php');

/* user defined includes */
// section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009AC-includes begin
// section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009AC-includes end

/* user defined constants */
// section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009AC-constants begin
// section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009AC-constants end

/**
 * Short description of class Livres
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class Livres
    extends Volumes
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute emprunte
     *
     * @access private
     * @var Boolean
     */
    private $emprunte = null;

    /**
     * Short description of attribute newAttr
     *
     * @access public
     * @var Integer
     */
    public $newAttr = null;

    /**
     * Short description of attribute newAttr
     *
     * @access public
     * @var Integer
     */
    public $newAttr = null;

    // --- OPERATIONS ---

    /**
     * Short description of method Empruntable
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function Empruntable()
    {
        // section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009C8 begin
        // section -64--88-56-1-313d700b:16f04d7fd4a:-8000:00000000000009C8 end
    }

} /* end of class Livres */

?>